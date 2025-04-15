%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

extern FILE* yyin;
extern int line_num;
extern int yylex();
extern int yydebug;
void yyerror(const char* s);
ASTNode* root = NULL;
%}

%union {
    struct {
        int value;
        int base;
    } intval;
    char ch;
    char* str;
    struct ASTNode* ast;
}

/* Define tokens */
%token BEGIN_TOK END_TOK PROGRAM VARDECL
%token IF ELSE WHILE FOR TO DO INC DEC
%token PRINT SCAN
%token ASSIGN PLUS_ASSIGN MINUS_ASSIGN MULT_ASSIGN DIV_ASSIGN MOD_ASSIGN
%token PLUS MINUS MULT DIV MOD
%token EQ GT LT GE LE NE
%token LPAREN RPAREN COMMA SEMICOLON COLON LBRACKET RBRACKET AT

%token <str> IDENTIFIER STRING INT CHAR
%token <intval> DECIMAL BINARY OCTAL
%token <ch> CHAR_CONST

/* Precedence rules */
%left EQ NE
%left GT LT GE LE
%left PLUS MINUS
%left MULT DIV MOD
%nonassoc UMINUS

/* Define non-terminal types */
%type <ast> program var_decl_section var_decl_list var_decl statement_list statement
%type <ast> assignment_stmt expression term factor constant
%type <ast> if_stmt while_stmt for_stmt print_stmt scan_stmt block
%type <ast>  print_arg_list scan_arg_list

%%

program:
    BEGIN_TOK PROGRAM COLON var_decl_section statement_list END_TOK PROGRAM
    {
        root = create_program_node($4, $5);
    }
    ;

var_decl_section:
    BEGIN_TOK VARDECL COLON var_decl_list END_TOK VARDECL
    {
        $$ = $4;
    }
    ;

var_decl_list:
      var_decl { $$ = $1; }
    | var_decl var_decl_list { $$ = create_list_node($1, $2); }
    ;

var_decl:
      LPAREN IDENTIFIER COMMA INT RPAREN SEMICOLON
        { $$ = create_var_decl_node($2, $4, 0); }
    | LPAREN IDENTIFIER COMMA CHAR RPAREN SEMICOLON
        { $$ = create_var_decl_node($2, $4, 0); }
    | LPAREN IDENTIFIER LBRACKET DECIMAL RBRACKET COMMA INT RPAREN SEMICOLON
        { $$ = create_var_decl_node($2, $7, $4.value); }
    | LPAREN IDENTIFIER LBRACKET DECIMAL RBRACKET COMMA CHAR RPAREN SEMICOLON
        { $$ = create_var_decl_node($2, $7, $4.value); }
    ;

statement_list:
      statement { $$ = $1; }
    | statement statement_list { $$ = create_list_node($1, $2); }
    ;

statement:
      assignment_stmt { $$ = $1; }
    | if_stmt         { $$ = $1; }
    | while_stmt      { $$ = $1; }
    | for_stmt        { $$ = $1; }
    | print_stmt      { $$ = $1; }
    | scan_stmt       { $$ = $1; }
    ;

assignment_stmt:
      IDENTIFIER ASSIGN expression SEMICOLON
        { $$ = create_assign_node(create_identifier_node($1), $3, ASSIGN); }
    | IDENTIFIER PLUS_ASSIGN expression SEMICOLON
        { $$ = create_assign_node(create_identifier_node($1), $3, PLUS_ASSIGN); }
    | IDENTIFIER MINUS_ASSIGN expression SEMICOLON
        { $$ = create_assign_node(create_identifier_node($1), $3, MINUS_ASSIGN); }
    | IDENTIFIER MULT_ASSIGN expression SEMICOLON
        { $$ = create_assign_node(create_identifier_node($1), $3, MULT_ASSIGN); }
    | IDENTIFIER DIV_ASSIGN expression SEMICOLON
        { $$ = create_assign_node(create_identifier_node($1), $3, DIV_ASSIGN); }
    | IDENTIFIER MOD_ASSIGN expression SEMICOLON
        { $$ = create_assign_node(create_identifier_node($1), $3, MOD_ASSIGN); }
    ;

expression:
      term { $$ = $1; }
    | expression PLUS term  { $$ = create_binary_op_node($1, $3, PLUS); }
    | expression MINUS term { $$ = create_binary_op_node($1, $3, MINUS); }
    | expression GT term    { $$ = create_binary_op_node($1, $3, GT); }
    | expression LT term    { $$ = create_binary_op_node($1, $3, LT); }
    | expression GE term    { $$ = create_binary_op_node($1, $3, GE); }
    | expression LE term    { $$ = create_binary_op_node($1, $3, LE); }
    | expression EQ term    { $$ = create_binary_op_node($1, $3, EQ); }
    | expression NE term    { $$ = create_binary_op_node($1, $3, NE); }
    ;

term:
      factor { $$ = $1; }
    | term MULT factor { $$ = create_binary_op_node($1, $3, MULT); }
    | term DIV factor  { $$ = create_binary_op_node($1, $3, DIV); }
    | term MOD factor  { $$ = create_binary_op_node($1, $3, MOD); }
    ;

factor:
      IDENTIFIER { $$ = create_identifier_node($1); }
    | constant   { $$ = $1; }
    | LPAREN expression RPAREN { $$ = $2; }
    | MINUS factor %prec UMINUS { $$ = create_binary_op_node(create_int_const_node(0, 10), $2, MINUS); }
    ;

constant:
      LPAREN DECIMAL COMMA DECIMAL RPAREN { $$ = create_int_const_node($2.value, $4.value); }
    | CHAR_CONST { $$ = create_char_const_node($1); }
    ;

if_stmt:
      IF LPAREN expression RPAREN block SEMICOLON
        { $$ = create_if_node($3, $5, NULL); }
    | IF LPAREN expression RPAREN block ELSE block SEMICOLON
        { $$ = create_if_node($3, $5, $7); }
    ;

while_stmt:
    WHILE LPAREN expression RPAREN block SEMICOLON
        { $$ = create_while_node($3, $5); }
    ;

for_stmt:
      FOR IDENTIFIER ASSIGN expression TO expression INC expression DO block SEMICOLON
        {
            ASTNode* init = create_assign_node(create_identifier_node($2), $4, ASSIGN);
            $$ = create_for_node(init, $6, $8, INC, $10);
        }
    | FOR IDENTIFIER ASSIGN expression TO expression DEC expression DO block SEMICOLON
        {
            ASTNode* init = create_assign_node(create_identifier_node($2), $4, ASSIGN);
            $$ = create_for_node(init, $6, $8, DEC, $10);
        }
    ;

print_stmt:
      PRINT LPAREN STRING RPAREN SEMICOLON
        { $$ = create_print_node(create_string_node($3), NULL); }
    | PRINT LPAREN STRING COMMA print_arg_list RPAREN SEMICOLON
        { $$ = create_print_node(create_string_node($3), $5); }
    ;

print_arg_list:
      expression { $$ = $1; }
    | expression COMMA print_arg_list { $$ = create_list_node($1, $3); }

    ;


scan_stmt:
    SCAN LPAREN STRING COMMA scan_arg_list RPAREN SEMICOLON
        { $$ = create_scan_node(create_string_node($3), $5); }
    ;


scan_arg_list:
      IDENTIFIER { $$ = create_identifier_node($1); }
    | IDENTIFIER COMMA scan_arg_list { $$ = create_list_node(create_identifier_node($1), $3); }
    ;

block:
      BEGIN_TOK statement_list END_TOK { $$ = create_block_node($2); }
    | statement { $$ = $1; }
    ;

%%

void yyerror(const char* s) {
    fprintf(stderr, "Syntax error at line %d: %s\n", line_num, s);
}

int main(int argc, char *argv[]) {
    yydebug=1;
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input file>\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Error opening file");
        return 1;
    }

    int parse_result = yyparse();
    fclose(yyin);

    if (parse_result == 0) {
        printf("Successfully parsed !!!\n");
        printf("AST in the generalized list form\n");
        print_ast(root, 0);
        printf("\n");
        return 0;
    } else {
        printf("Syntax error !!!\n");
        return 1;
    }
}