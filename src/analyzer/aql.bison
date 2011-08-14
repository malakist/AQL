%{
	#include <stdlib.h>
	#include <stdio.h>
	
	int yylex(void);
	void yyerror(char const *);
%}

%union {
	char * idName;
	char * litValue;
}

%token <idName> IDENTIFIER
%token <litValue> LITERAL
%token MEMBER_PTR
%token EQ NE GT LT GE LE
%token NOT AND OR
%token FROM_BEGIN WHERE_BEGIN SELECT_BEGIN
%token Q_BEGIN Q_END

%%

query:				Q_BEGIN from_clause where_clause select_clause Q_END
						{ printf("Query analizada com sucesso\n\n"); exit(0); }
					| Q_BEGIN from_clause select_clause Q_END
					;

from_clause:		FROM_BEGIN table_list
					;
					
table_list:			table_identifier
					| table_list ',' table_identifier
					;

table_identifier: 	IDENTIFIER
					;
					
where_clause:		WHERE_BEGIN predicate_list
					;
					
predicate_list:		predicate
					| predicate_list AND predicate
					| predicate_list OR predicate
					;
					
predicate:			expression
					| expression EQ expression
					| expression NE expression
					| expression GT expression
					| expression LT expression
					| expression GE expression
					| expression LE expression
					| NOT predicate
					;

select_clause:		SELECT_BEGIN
					| SELECT_BEGIN member_list
					;

member_list:		expression
					| member_list ',' expression
					;
				
expression:			IDENTIFIER
					| IDENTIFIER MEMBER_PTR IDENTIFIER
					| IDENTIFIER '(' expression ')'
					| LITERAL
					;

%%

int main(void) {
	yyparse();
	return 0;
}

void yyerror(const char *s) {
	fprintf(stderr, "%s\n", s);
}