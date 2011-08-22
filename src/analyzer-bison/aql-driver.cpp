#include "aql-driver.h"
#include "aql-parser.tab.hh"
#include <iostream>
#include <sstream>
#include <memory>

AQL::aql_driver::aql_driver()
	:trace_scanning(false), trace_parsing(false), result(0), _currentLocation("", std::ios_base::in | std::ios_base::out)
{ }

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

void
AQL::aql_driver::setCurrentLocation(const AQL::location& l) {
	_currentLocation.str("");
	_currentLocation << l;
	_currentLocation.flush();
	//std::cout << "Localizacao: " << this->getLocationString() << std::endl;
}

const char * AQL::aql_driver::getLocationString(void) const {	
	std::string str(_currentLocation.str());
	const char * result = str.c_str();
	return result;
}