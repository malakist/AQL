%option noyywrap

%{

	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include <iostream>
	#include "..\qtree\AqlInclude.h"
	#include "..\qtree\AqlNode.h"
	#include "y.tab.h"
%}

%%

	/* Identificadores */
	
"Begin Query"			return Q_BEGIN;
"End Query"			return Q_END;

"From"				return FROM_BEGIN;
"Where"				return WHERE_BEGIN;
"Select"			return SELECT_BEGIN;

[a-zA-Z][_a-zA-Z0-9]*		{
					char * cpyIdName;
					cpyIdName = (char *) malloc(sizeof(yytext));
					strcpy(cpyIdName, yytext);
					yylval.idName = cpyIdName;
					return IDENTIFIER;
				}

[0-9]+				{
					char * cpyLitValue;
					cpyLitValue = (char *) malloc(sizeof(yytext));
					strcpy(cpyLitValue, yytext);
					yylval.litValue = cpyLitValue;
					return INTEGER;
				}

[0-9]*\.[0-9]+			{
					char * cpyLitValue;
					cpyLitValue = (char *) malloc(yyleng);
					strcpy(cpyLitValue, yytext);
					yylval.litValue = cpyLitValue;
					return FLOAT;
				}

[\"][0-9A-Za-z]*[\"]		{
					char * cpyLitValue;
					int length = strlen(yytext);
					cpyLitValue = (char *) malloc(sizeof(yytext) - 2);
					strncpy(cpyLitValue, yytext+1, length);
					yylval.litValue = cpyLitValue;
					return STRING;
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

%% 

extern int yyparse (void);

int main(int argc, char **argv) {
	argc--, argv++;
	
	std::cout << "Iniciando o compilador\n";
	
	if (argc > 0)  
	{
		std::cout << "Compilando via arquivo...\n";
		yyin = fopen(argv[0], "r"); 
	} 
	else 
	{
		std::cout << "Compilando via STDIN...\n";
		yyin = stdin;
	}
		
	yyparse();
	
	std::cout << "Compilacao encerrada\n\n"; 
	return 0;
}