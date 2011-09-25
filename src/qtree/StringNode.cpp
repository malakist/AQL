#include <iostream>
#include "AqlNode.h"

namespace AQL {

StringNode::~StringNode() {}

const std::string StringNode::emitString() const {
	return std::string("StringNode:") + _nodeValue;
}

} //namespace
