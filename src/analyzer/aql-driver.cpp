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
}

template<typename NodeT>
NodeT* AQL::aql_driver::createPositionedNode(void) const {
	NodeT* node = new NodeT;
	std::string locationText(currentFileName);
	locationText.append(currentLine);
	locationText.append(", ");
	locationText.append(currentColumn);
	node->setLocationText(locationText.c_str);
	return node;
}