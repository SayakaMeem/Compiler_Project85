%{
#include "2007085.tab.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// Fix for strdup compatibility
#ifndef strdup
#define strdup _strdup
#endif

// Define yywrap
int yywrap(void) {
    return 1;
}
%}

%%
[ \t\r\n]+          ; // Ignore whitespaces and newlines
"integer"           { return INTEGER; }
"real"              { return REAL; }
"character"         { return CHARACTER; }
"text"              { return TEXT; }
"mainblock"         { return MAINBLOCK; }
"condition"         { return CONDITION; }
"otherwise"         { return OTHERWISE; }
"loop"              { return LOOP; }
"iterate"           { return ITERATE; }
"exit"              { return EXIT; }
[0-9]+              { yylval.intVal = atoi(yytext); return INT_LITERAL; }
[0-9]*\.[0-9]+      { yylval.floatVal = atof(yytext); return FLOAT_LITERAL; }
\"[^\"]*\"          { yylval.stringVal = strdup(yytext); return STRING_LITERAL; }
[a-zA-Z_][a-zA-Z0-9_]* { yylval.idVal = strdup(yytext); return IDENTIFIER; }
"+"                 { return ADD; }
"-"                 { return SUBTRACT; }
"*"                 { return MULTIPLY; }
"/"                 { return DIVIDE; }
"="                 { return ASSIGNMENT; }
"=="                { return EQUAL; }
"!="                { return NOT_EQUAL; }
"<"                 { return LESS_THAN; }
">"                 { return GREATER_THAN; }
"<="                { return LESS_EQUAL; }
">="                { return GREATER_EQUAL; }
";"                 { return END_STMT; }
","                 { return SEPARATOR; }
"{"                 { return OPEN_BLOCK; }
"}"                 { return CLOSE_BLOCK; }
"("                 { return OPEN_PAREN; }
")"                 { return CLOSE_PAREN; }
.                   { printf("Error: Unrecognized token '%s'\n", yytext); exit(1); }
%%
