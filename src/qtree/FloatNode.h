#ifndef FLOATNODE_H
#define FLOATNODE_H

#include "AqlNode.h"

namespace AQL {

class FloatNode : public AQL::AqlNode {
private:
	std::string _nodeValue;
public:
	explicit FloatNode(const char * nodeValue) { this->_nodeValue = std::string(nodeValue); }
	
};

} // namespace AQL

#endif