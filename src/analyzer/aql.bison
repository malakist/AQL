%{
	#include <stdlib.h>
	#include <stdio.h>

	#define YYSTYPE char const *
	
	int yylex(void);
	void yyerror(const char *);
%}

%token IDENTIFIER

%%

input:
			| input line
			;
			
line:		'\n'
			| column_id '\n'					{ printf("Identificador + pulada de linha\n\n"); }

column_id:	identifier '->' identifier			{ printf("Identificador encontrado: \"%s\"->\"%s\"\n", $1, $3); }
			;

identifier: IDENTIFIER							{ $$ = $1; }
			'(' IDENTIFIER ')'					{ $$ = $2; }
			
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