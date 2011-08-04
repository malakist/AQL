%{
	#include "y.tab.h"
	#include "..\include\aqlparser.h"
	#include <stdlib.h>

	#define YYSTYPE char const *
	
	int yylex(void);
	void yyerror(const char *);
%}

%token IDENTIFIER

%%

column_id:
				IDENTIFIER '->' IDENTIFIER		{ printf("nome de coluna: %s e %s\n", $1, $3); }
			|	'(' column_id ')'				{ printf("nome de coluna entre parenteses\n"); }
			;
				
%%

int yywrap(void) {
	return 1;
}

int main(void) {
	yyparse();
	return 0;
}

void yyerror(const char *s) {
	fprintf(stderr, "%s\n", s);
}