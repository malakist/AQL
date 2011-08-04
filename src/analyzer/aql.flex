%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	void yyerror(char *);
%}

%%

[a-zA-Z]	{ yyval = yytext; return IDENTIFIER; }

%%

int main (void) {
	return 0;
}


