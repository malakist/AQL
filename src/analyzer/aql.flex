%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	void yyerror(char *);
%}

%%

	/* Identificadores */
	
[a-zA-Z0-9]+			{
					yylval = yytext;
					return IDENTIFIER;
				}
	/* operadores */

[\->+()=/*\n]		{ return *yytext; }



