%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// shift reduce conf
// // semicolon (;) is placed extra; this is an error

extern int yylex();
extern FILE *yyin;
void yyerror(const char *s);
%}

%union {
    char *strval;
}

%token BEGIN_TOKEN END_TOKEN PROGRAM VAR_DECL INT CHAR IF ELSE WHILE FOR MAIN PRINT SCAN INC DEC
%token ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN
%token PLUS MINUS MULTIPLY DIVIDE MODULO
%token EQUAL GREATER LESS GREATER_EQUAL LESS_EQUAL NOT_EQUAL
%token LPAREN RPAREN SEMICOLON COLON COMMA LBRACE RBRACE LBRACKET RBRACKET AT
%token TO DO

%token <strval> IDENTIFIER
%token <strval> DECIMAL_CONST BINARY_CONST OCTAL_CONST
%token <strval> CHAR_CONST STRING_CONST

%start program

%%

program: 
    BEGIN_TOKEN PROGRAM COLON BEGIN_TOKEN VAR_DECL COLON var_list END_TOKEN VAR_DECL statement_list END_TOKEN PROGRAM
    { printf("Successfully parsed !!!\n"); }
    ;


var_list:
    var_item
    | var_list var_item
    ;

id: IDENTIFIER

var_item: LPAREN id COMMA type RPAREN SEMICOLON
        | LPAREN IDENTIFIER LBRACKET DECIMAL_CONST RBRACKET COMMA type RPAREN SEMICOLON

type:
    INT
    | CHAR
    ;

statement_list:
    statement
    | statement_list statement
    ;

statement:
    assignment_statement
    | print_statement
    | scan_statement
    | if_statement
    | while_statement
    | for_statement
    | block_statement
    ;

block_statement:
    BEGIN_TOKEN statement_list END_TOKEN 
    ;

assignment_statement:
    IDENTIFIER assignment_op expression SEMICOLON
    | IDENTIFIER LBRACKET expression RBRACKET assignment_op expression SEMICOLON
    ;



assignment_op:
    ASSIGN
    | ADD_ASSIGN
    | SUB_ASSIGN
    | MUL_ASSIGN
    | DIV_ASSIGN
    | MOD_ASSIGN
    ;

print_statement:
    PRINT LPAREN STRING_CONST RPAREN SEMICOLON
    | PRINT LPAREN STRING_CONST COMMA print_args RPAREN SEMICOLON
    ;

print_args:
    expression
    | print_args COMMA expression
    ;

scan_statement:
    SCAN LPAREN STRING_CONST COMMA scan_args RPAREN SEMICOLON
    ;

scan_args:
    IDENTIFIER
    | scan_args COMMA IDENTIFIER
    ;

if_statement:
    IF LPAREN condition RPAREN block_statement SEMICOLON
    | IF LPAREN condition RPAREN block_statement ELSE block_statement SEMICOLON
    ;

while_statement:
    WHILE LPAREN condition RPAREN DO block_statement SEMICOLON
    ;

for_statement:
    FOR IDENTIFIER ASSIGN expression TO expression INC expression DO block_statement SEMICOLON
    | FOR IDENTIFIER ASSIGN expression TO expression DEC expression DO block_statement SEMICOLON
    ;

condition:
    expression
    | expression relational_op expression
    ;

relational_op:
    EQUAL
    | GREATER
    | LESS
    | GREATER_EQUAL
    | LESS_EQUAL
    | NOT_EQUAL
    ;

expression:
    term
    | expression PLUS term
    | expression MINUS term
    ;

term:
    factor
    | term MULTIPLY factor
    | term DIVIDE factor
    | term MODULO factor
    ;

factor:
    IDENTIFIER
    | IDENTIFIER LBRACKET expression RBRACKET
    | DECIMAL_CONST
    | BINARY_CONST
    | OCTAL_CONST
    | CHAR_CONST
    | LPAREN expression RPAREN
    ;

%%

void yyerror(const char *s) {
    static int error_reported = 0;
    if (!error_reported) {
        printf("Syntax error !!!\n");
        error_reported = 1;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input file>\n", argv[0]);
        return 1;
    }
    
    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Error opening file");
        return 1;
    }
    
    yyparse();
    fclose(yyin);
    return 0;
}
