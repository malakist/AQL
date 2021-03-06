#include "aql-driver.h"
#include "aql-parser.tab.hh"
#include <iostream>
#include <sstream>
#include <memory>

AQL::aql_driver::aql_driver()
	:trace_scanning(false), trace_parsing(false), result(0), currentFileName(0), currentLine(0), currentColumn(0)
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
	{
		currentFileName = l.end.filename;
		currentLine = l.end.line;
		currentColumn = l.end.column;
	}
	std::cout << "Localizacao: " << *(this->getLocationString()) << std::endl;
}

std::string * 
AQL::aql_driver::getLocationString(void) const {		
	std::string* res = this->currentFileName;
	std::string cont = *res;
	cont.append(": ");
	std::cout << "getLocationString: " << *res << std::endl;
	return res;
}