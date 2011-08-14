#include <string>
#include <cstdarg>
#include "AqlNode.h"
#include "AqlInclude.h"

using namespace std;

namespace AQL {

AqlNode::AqlNode(AqlNodeType nodeType, int childCount, ...) {
	va_list ap;
	int i;
	
	this->nodeType = nodeType;
	this->childCount = childCount;
	this->childNodes = new AqlNodeList;
	
	va_start(ap, childCount);
	for (i = 0; i < childCount; i++)
		this->childNodes->push_back(va_arg(ap, AqlNode*));
	va_end(ap);
}

AqlNode& AqlNode::operator=(AqlNode& rhs) {
	return *this;
}

AqlNode * AqlNode::GetNodeAtPosition(const short position) {
	return this->childNodes[position];
}

int AqlNode::GetChildCount(void) {
	return this->childCount;
}

} // namespace
