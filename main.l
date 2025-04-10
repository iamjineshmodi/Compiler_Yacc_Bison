%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.tab.h"

void yyerror(const char *);
%}

%option noyywrap

%%
"begin"                     { return BEGIN_TOKEN; }
"end"                       { return END_TOKEN; }
"program"                  { return PROGRAM; }
"VarDecl"                  { return VAR_DECL; }
"int"                       { return INT; }
"char"                      { return CHAR; }
"if"                        { return IF; }
"else"                      { return ELSE; }
"while"                     { return WHILE; }
"for"                       { return FOR; }
"main"                      { return MAIN; }
"print"                     { return PRINT; }
"scan"                      { return SCAN; }
"inc"                       { return INC; }
"dec"                       { return DEC; }
"to"                        { return TO; }
"do"                        { return DO; }

[a-z][a-z0-9]*(_[a-z0-9]+)?  { 
    /* Variable identifiers: start with lowercase, can have digits, at most one underscore */
    yylval.strval = strdup(yytext);
    return IDENTIFIER; 
}

\([0-9]+,[[:blank:]]*10\)   { 
    /* Decimal constant (value, 10) */
    yylval.strval = strdup(yytext);
    return DECIMAL_CONST; 
}

\([0-1]+,[[:blank:]]*2\)    { 
    /* Binary constant (value, 2) */
    yylval.strval = strdup(yytext);
    return BINARY_CONST; 
}

\([0-7]+,[[:blank:]]*8\)    { 
    /* Octal constant (value, 8) */
    yylval.strval = strdup(yytext);
    return OCTAL_CONST; 
}

'\\?[a-zA-Z0-9]'            { 
    /* Character constant - single quoted character */
    yylval.strval = strdup(yytext);
    return CHAR_CONST; 
}

\"[^\"]*\"                  { 
    /* String constant - double quoted string */
    yylval.strval = strdup(yytext);
    return STRING_CONST; 
}

":="                        { return ASSIGN; }
"+="                        { return ADD_ASSIGN; }
"-="                        { return SUB_ASSIGN; }
"*="                        { return MUL_ASSIGN; }
"/="                        { return DIV_ASSIGN; }
"%="                        { return MOD_ASSIGN; }
"+"                         { return PLUS; }
"-"                         { return MINUS; }
"*"                         { return MULTIPLY; }
"/"                         { return DIVIDE; }
"%"                         { return MODULO; }
"="                         { return EQUAL; }
">"                         { return GREATER; }
"<"                         { return LESS; }
">="                        { return GREATER_EQUAL; }
"<="                        { return LESS_EQUAL; }
"<>"                        { return NOT_EQUAL; }
"("                         { return LPAREN; }
")"                         { return RPAREN; }
";"                         { return SEMICOLON; }
":"                         { return COLON; }
","                         { return COMMA; }
"{"                         { return LBRACE; }
"}"                         { return RBRACE; }
"["                         { return LBRACKET; }
"]"                         { return RBRACKET; }
"@"                         { return AT; }

[ \t\n]+                    { /* Ignore whitespace */ }
"//".*                      { /* Ignore single line comments */ }
"/*"([^*]|"*"[^/])*"*/"     { /* Ignore multi-line comments */ }

.                           { 
    char error_msg[100];
    sprintf(error_msg, "Unexpected character: %s", yytext);
    yyerror(error_msg);
}
%%