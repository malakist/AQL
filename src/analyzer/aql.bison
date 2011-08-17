%skeleton "lalr1.cc"
%require "2.4.1"
%defines
%define namespace "AQL"
%define parser_class_name "Parser"

%code requires{
	#include <stdlib.h>
	#include <stdio.h>
	#include "..\qtree\AqlInclude.h"
	#include "..\qtree\AqlNode.h"
	
	typedef struct {
		int nodeId;
	} treeNode;

	int yylex(void);
	void yyerror(char const *);
}

%union {
	char *litValue;
	char *idName;
	//treeNode *nodePointer;
}

%token <idName> IDENTIFIER
%token <litValue> INTEGER FLOAT STRING
%token MEMBER_PTR
%token EQ NE GT LT GE LE
%token NOT AND OR
%token FROM_BEGIN WHERE_BEGIN SELECT_BEGIN
%token Q_BEGIN Q_END

%type <nodePointer> expression

%%

query:				Q_BEGIN from_clause where_clause select_clause Q_END
						{ printf("Query analizada com sucesso\n\n"); return(0); }
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
				
expression:			IDENTIFIER								{ printf("Identifier: \"%s\"\n", $1); }
					| IDENTIFIER MEMBER_PTR IDENTIFIER		{  }
					| IDENTIFIER '(' expression ')'			{  }
					| INTEGER								{  printf("Integer: \"%s\"\n", $1); }
					| FLOAT									{  printf("Float: \"%s\"\n", $1); }
					| STRING								{  printf("String: \"%s\"\n", $1); }
					;

%%


void yyerror(const char *s) {
	fprintf(stderr, "%s\n", s);
}