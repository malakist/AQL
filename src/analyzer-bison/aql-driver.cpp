#include "aql-driver.h"
#include "aql-parser.tab.hh"

aql_driver::aql_driver()
	:trace_scanning(false), trace_parsing(false)
{
	qManager = new AQL::AqlQueriesManager;
}

aql_driver::~aql_driver() {}

int 
aql_driver::parse(const std::string& f) {
	file = f;
	scan_begin();
	AQL::aql_parser parser(*this);
	parser.set_debug_level(trace_parsing);
	int res = parser.parse();
	scan_end();
	return res;
}

void
aql_driver::error(const AQL::location& l, const std::string& m) {
	std::cerr << l << ": " << std::endl;
}

void
aql_driver::error(const std::string& m) {
	std:cerr << m << std:endl;
}