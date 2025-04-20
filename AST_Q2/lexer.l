%{
#include "parser.tab.h"
#include <string.h>
#include <stdlib.h>
extern int line_num;

%}
COMMENT     \/\*([^*]|\*+[^*/])*\*+\/|\/\/.*

DECIMAL     \(([0]|[1-9][0-9]*),[ ]*10\)
BINARY      \([0-1]+,[ ]*2\)
OCTAL       \([0-7]+,[ ]*8\)
ID         [a-zA-Z_][a-zA-Z_0-9]*

%%
{COMMENT}                         { }

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


\"([^\"\\"]|\\.)*\"              {
                                  yylval.str = strdup(yytext);
                                  return STRING;
                                }

{DECIMAL}    { 
    /* Extract number and base from the format (number,10) */
    char *number_str = strdup(yytext);
    number_str++; /* Skip the opening parenthesis */
    
    char *comma_pos = strchr(number_str, ',');
    if (comma_pos) {
        *comma_pos = '\0'; /* Null-terminate at the comma */
        
        /* Parse the number part */
        yylval.intval.value = atoi(number_str);
        yylval.intval.base = 10;
        
        return DECIMAL;
    }
    /* Handle error case if format is incorrect */
    yyerror("Invalid decimal format");
}

{BINARY}     {
    /* Extract number and base from the format (number,2) */
    char *number_str = strdup(yytext);
    number_str++; /* Skip the opening parenthesis */
    
    char *comma_pos = strchr(number_str, ',');
    if (comma_pos) {
        *comma_pos = '\0'; /* Null-terminate at the comma */
        
        /* Parse binary number (convert from base 2 to decimal) */
        int value = 0;
        for (int i = 0; number_str[i] != '\0'; i++) {
            value = value * 2 + (number_str[i] - '0');
        }
        
        yylval.intval.value = value;
        yylval.intval.base = 2;
        
        return BINARY;
    }
    /* Handle error case if format is incorrect */
    yyerror("Invalid binary format");
}

{OCTAL}      {
    /* Extract number and base from the format (number,8) */
    char *number_str = strdup(yytext);
    number_str++; /* Skip the opening parenthesis */
    
    char *comma_pos = strchr(number_str, ',');
    if (comma_pos) {
        *comma_pos = '\0'; /* Null-terminate at the comma */
        
        /* Parse octal number (convert from base 8 to decimal) */
        int value = 0;
        for (int i = 0; number_str[i] != '\0'; i++) {
            value = value * 8 + (number_str[i] - '0');
        }
        
        yylval.intval.value = value;
        yylval.intval.base = 8;
        
        return OCTAL;
    }
    /* Handle error case if format is incorrect */
    yyerror("Invalid octal format");
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
