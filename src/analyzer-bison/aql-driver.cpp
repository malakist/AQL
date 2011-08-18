#include "aql-driver.h"
#include "aql-parser.tab.hh"

AQL::aql_driver::aql_driver()
	:trace_scanning(false), trace_parsing(false), result(0)
{
	// qManager = new AQL::AqlQueriesManager;
}

AQL::aql_driver::~aql_driver() {}

int 
AQL::aql_driver::parse(const std::string& f) {
	file = f;
	scan_begin();
	AQL::aql_parser parser(*this);
	parser.set_debug_level(trace_parsing);
	int res = parser.parse();
	scan_end();
	return res;
}

void
AQL::aql_driver::error(const AQL::location& l, const std::string& m) {
	std::cerr << l << ": " << std::endl;
}

void
AQL::aql_driver::error(const std::string& m) {
	std::cerr << m << std::endl;
}