%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"
%}

%%

	/* Identificadores */
	
"Begin Query"			return Q_BEGIN;
"End Query"			return Q_END;

"From"				return FROM_BEGIN;
"Where"				return WHERE_BEGIN;
"Select"			return SELECT_BEGIN;

[a-zA-Z][a-zA-Z0-9]*		{
					char * cpyIdName;
					cpyIdName = malloc(sizeof(yytext));
					strcpy(cpyIdName, yytext);
					yylval.idName = cpyIdName;
					return IDENTIFIER;
				}

[0-9]+				{
					char * cpyLitValue;
					cpyLitValue = malloc(sizeof(yytext));
					strcpy(cpyLitValue, yytext);
					yylval.litValue = cpyLitValue;
					return LITERAL;
				}

[\"][0-9]*[\"]			{
					char * cpyLitValue;
					int length = strlen(yytext);
					cpyLitValue = malloc(sizeof(yytext) - 2);
					strncpy(cpyLitValue, yytext+1, length);
					yylval.litValue = cpyLitValue;
					return LITERAL;
				}

"->"				return MEMBER_PTR;

"=="				return EQ;
"!="				return NE;
"<>"				return NE;
">"				return GT;
"<"				return LT;
">="				return GE;
"<="				return LT;
".Not."				return NOT;
".And."				return AND;
".Or."				return OR;


[\n\t ]+			/* nao devolve espacos em branco */


. 				{ printf("Caracter desconhecido"); }
