#include <string>
#include <cstdarg>
#include "AqlNode.h"

namespace AQL {

AqlNode::AqlNode() {}

AqlNode::~AqlNode(void) {
	delete this->childNodes;
}

AqlNode& AqlNode::operator=(AqlNode& rhs) {
	return *this;
}

AqlNode * AqlNode::getNodeAtPosition(const int position) const {
	return (*(this->childNodes))[position];
}

std::size_t AqlNode::getChildCount(void) const {
	return this->childNodes->size();
}

void AqlNode::setLocation(const char * l) {
	location = std::string(l);
}

const char * AqlNode::getLocation(void) const {
	return location.c_str();
}

void AqlNode::addChildNodes(const short nodeCount, ...) {
	va_list ap;
	short i;

	//TODO appcrash ocorrendo aqui, apos tentativa de leitura de localizacao no arquivo
	va_start(ap, nodeCount);
	if (!(this->childNodes)) this->childNodes = new std::vector<AqlNode*>;
	for (i = 0; i < nodeCount; i++)
		this->childNodes->push_back(va_arg(ap, AqlNode*));
	va_end(ap);
}

} // namespace
