%{
#include "parser.tab.h"
#include <string.h>
#include <stdlib.h>
extern int line_num;
%}

DIGIT      [0-9]
BINARY     0b[01]+
OCTAL      0o[0-7]+
ID         [a-zA-Z_][a-zA-Z_0-9]*

%%

"begin"                         { return BEGIN_TOK; }
"end"                           { return END_TOK; }
"program"                       { return PROGRAM; }
"VarDecl"                       { return VARDECL; }

"if"                            { return IF; }
"else"                          { return ELSE; }
"while"                         { return WHILE; }
"for"                           { return FOR; }
"to"                            { return TO; }
"do"                            { return DO; }
"inc"                           { return INC; }
"dec"                           { return DEC; }

"print"                         { return PRINT; }
"scan"                          { return SCAN; }
"int"                           {yylval.str=strdup(yytext);return INT;}
"char"                          {yylval.str=strdup(yytext); return CHAR;}

"+="                            { return PLUS_ASSIGN; }
"-="                            { return MINUS_ASSIGN; }
"*="                            { return MULT_ASSIGN; }
"/="                            { return DIV_ASSIGN; }
"%="                            { return MOD_ASSIGN; }
":="                            { return ASSIGN; }

"+"                             { return PLUS; }
"-"                             { return MINUS; }
"*"                             { return MULT; }
"/"                             { return DIV; }
"%"                             { return MOD; }

"="                             { return EQ; }
">"                             { return GT; }
"<"                             { return LT; }
">="                            { return GE; }
"<="                            { return LE; }
"<>"                            { return NE; }

"("                             { return LPAREN; }
")"                             { return RPAREN; }
","                             { return COMMA; }
";"                             { return SEMICOLON; }
":"                             { return COLON; }
"["                             { return LBRACKET; }
"]"                             { return RBRACKET; }
"@"                             { return AT; }

\"([^\\\"]|\\.)*\"              {
                                  yylval.str = strdup(yytext);
                                  return STRING;
                                }

{BINARY}                        {
                                  yylval.intval.value = strtol(yytext+2, NULL, 2);
                                  yylval.intval.base = 2;
                                  return BINARY;
                                }

{OCTAL}                         {
                                  yylval.intval.value = strtol(yytext+2, NULL, 8);
                                  yylval.intval.base = 8;
                                  return OCTAL;
                                }

{DIGIT}+                        {
                                  yylval.intval.value = atoi(yytext);
                                  yylval.intval.base = 10;
                                  return DECIMAL;
                                }

\'[^\']\'                       {
                                  yylval.ch = yytext[1];
                                  return CHAR_CONST;
                                }

{ID}                            {
                                  yylval.str = strdup(yytext);
                                  return IDENTIFIER;
                                }

[ \t\r\n]+                      {
                                  /* skip whitespace */
                                }

.                               {
                                  printf("Unknown character: %s at line %d\n", yytext, line_num);
                                }

%%

int yywrap() {
    return 1;
}
