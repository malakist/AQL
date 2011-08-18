#ifndef AQL_DRIVER_H
#define AQL_DRIVER_H

#include <string>
//#include "..\qtree\AqlQueriesManager.h"
#include "aql-parser.tab.hh"

#define YY_DECL	\
AQL::aql_parser::token_type	\
yylex(	AQL::aql_parser::semantic_type* yylval, \
		AQL::aql_parser::location_type* yylloc, \
		AQL::aql_driver& driver)
		
YY_DECL;

namespace AQL {

class aql_driver {
public:
	aql_driver();
	virtual ~aql_driver();
	
	//AQL::AqlQueriesManager* qManager;
	
	int result;
	
	void scan_begin();
	void scan_end();
	
	bool trace_scanning;
	bool trace_parsing;
	
	int parse(const std::string& f);
	std::string file;
	
	void error(const AQL::location& l, const std::string& m);
	void error(const std::string& m);
};

} //namespace AQL

#endif