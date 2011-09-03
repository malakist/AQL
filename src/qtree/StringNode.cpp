#include <iostream>
#include "StringNode.h"

namespace AQL {

StringNode::~StringNode() {}

const std::string StringNode::emitString() const {
	return std::string("StringNode:") + _nodeValue;
}

} //namespace
