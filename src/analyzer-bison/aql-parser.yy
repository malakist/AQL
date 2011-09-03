%skeleton "lalr1.cc"%require "2.4.1"%defines%define namespace "AQL"%define parser_class_name "aql_parser"%code requires{#include <string>#include "..\qtree\AqlNode.h"#include "..\qtree\StringNode.h"#include "..\qtree\FunctionNode.h"#include "..\qtree\ColumnNode.h"#include "..\qtree\MembersNode.h"#include "..\qtree\SelectNode.h"#include "..\qtree\PredicateNode.h"#include "..\qtree\LogicalCompNode.h"#include "..\qtree\LogicalConnectorNode.h"#include "..\qtree\WhereNode.h"#include "..\qtree\TableNode.h"#include "..\qtree\FromClauseNode.h"#include "..\qtree\QueryNode.h"#include "..\qtree\IntegerNode.h"#include "..\qtree\StringNode.h"#include "..\qtree\FloatNode.h"#include "..\qtree\TreeWalker.h"//#define YYSTYPE const char *namespace AQL {	class aql_driver; }}%parse-param { aql_driver& driver }%lex-param { aql_driver& driver }%locations%initial-action{	@$.begin.filename = @$.end.filename = &driver.file;};%debug%error-verbose%code {#include "aql-driver.h"}%token	END	0			"end"%token 	IDENTIFIER		"identifier"%token 	INTEGER 		"integer"%token	FLOAT 			"float"%token	STRING			"string"%token 	MEMBER_PTR		"->"%token 	EQ 				"=="%token	NE 				"!="%token	GT 				">"%token	LT 				"<"%token	GE 				">="%token	LE				"<="%token 	NOT 			".Not."%token	AND 			".And."%token	OR				".Or."%token 	FROM_BEGIN 		"From"%token	WHERE_BEGIN 	"Where"%token	SELECT_BEGIN	"Select"%token 	Q_BEGIN 		"Begin Query"%token	Q_END			"End Query"%union{	AQL::AqlNode *aqlNode;	char * identifierName;	char * literalValue;}%type <aqlNode> expression%type <identifierName> IDENTIFIER%type <literalValue> INTEGER FLOAT STRING%type <aqlNode> MEMBER_PTR%type <aqlNode> EQ NE GT LT GE LE%type <aqlNode> NOT AND OR%type <aqlNode> member_list%type <aqlNode> select_clause%type <aqlNode> predicate%type <aqlNode> predicate_list%type <aqlNode> query%type <aqlNode> from_clause%type <aqlNode> table_list%type <aqlNode> table_identifier%type <aqlNode> where_clause%%%start query;query: 				  "Begin Query" from_clause where_clause select_clause "End Query" 							{ 							$$ = new AQL::QueryNode();							$$->addChildNode($2);							$$->addChildNode($3);							$$->addChildNode($4);														std::cout << "\n\nPreparando emissao da string...\n\n";														AQL::TreeWalker * walker = new AQL::TreeWalker($$);							walker->PerformEmitString();						}					| "Begin Query" from_clause select_clause "End Query"										{ 							$$ = new AQL::QueryNode();							$$->addChildNode($2);							$$->addChildNode($3);						}					;					from_clause:		  "From" table_list						{ 							$$ = new AQL::FromClauseNode(); 							AQL::AqlNode * node = $2;							while (node) {								$$->addChildNode(node);								node = node->getLeftNode();							}						}					;					table_list:			  table_identifier						{ $$ = $1; }					| table_list ',' table_identifier						{ $1->setRightNode($3); 						  $$ = $3; }					;table_identifier: 	  "identifier"										{ 							AQL::TableNode * node = new AQL::TableNode();							node->setTableName($1);							$$ = node;						}					;					where_clause:		  "Where" predicate_list	{ $$ = new AQL::WhereNode(); $$->addChildNode($2); }					;					predicate_list:		  predicate						{ $$ = new AQL::PredicateNode(); $$->setRightNode($1); $$ = $1;}					| ".Not." predicate						{ $$ = new AQL::LogicalConnectorNode(AQL::LogicalConnectorTypes::NOT); $$->addChildNode($1); }					| predicate_list ".And." predicate						{ $$ = new AQL::LogicalConnectorNode(AQL::LogicalConnectorTypes::AND); $$->addChildNode($1); $$->addChildNode($3); }					| predicate_list ".Or." predicate						{ $$ = new AQL::LogicalConnectorNode(AQL::LogicalConnectorTypes::OR); $$->addChildNode($1); $$->addChildNode($3); }					;					predicate:			  expression					{ $$ = $1; }					| expression "==" expression	{ $$ = new AQL::LogicalCompNode(AQL::Operator::EQ); $$->addChildNode($1); $$->addChildNode($3); }					| expression "!=" expression	{ $$ = new AQL::LogicalCompNode(AQL::Operator::NE); $$->addChildNode($1); $$->addChildNode($3); }					| expression ">" expression		{ $$ = new AQL::LogicalCompNode(AQL::Operator::GT); $$->addChildNode($1); $$->addChildNode($3); }					| expression "<" expression		{ $$ = new AQL::LogicalCompNode(AQL::Operator::LT); $$->addChildNode($1); $$->addChildNode($3); }					| expression ">=" expression	{ $$ = new AQL::LogicalCompNode(AQL::Operator::GE); $$->addChildNode($1); $$->addChildNode($3); }					| expression "<=" expression	{ $$ = new AQL::LogicalCompNode(AQL::Operator::LE); $$->addChildNode($1); $$->addChildNode($3); }					;select_clause:		  "Select"													{ 	$$ = new AQL::SelectNode();  }					| "Select" member_list										{ 							$$ = new AQL::SelectNode();							AQL::AqlNode * node = $2;							while(node) {								$$->addChildNode(node);								node = node->getLeftNode();							}						}					;member_list:		  expression						{							$$ = $1;						}					| member_list ',' expression						{							$1->setRightNode($3);							$$ = $3;						}					;				expression:			IDENTIFIER MEMBER_PTR IDENTIFIER								{							AQL::ColumnNode * node = new AQL::ColumnNode();							node->setTableName($1);							node->setColumnName($3);							$$ = node;						}					| IDENTIFIER '(' expression ')'									{							AQL::FunctionNode * node = new AQL::FunctionNode(); 							node->setFunctionName($1);							node->setArgument($3);							$$ = node; 						}					| '(' expression ')'   	{ $$ = $2; }					| INTEGER				{ $$ = new AQL::IntegerNode($1); }					| FLOAT					{ $$ = new AQL::FloatNode($1); }					| STRING				{ $$ = new AQL::StringNode($1); }					;					%%void AQL::aql_parser::error(const AQL::aql_parser::location_type& l, const std::string& m) {	driver.error(l, m);}