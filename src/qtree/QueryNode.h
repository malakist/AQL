#ifndef QUERYNODE_H
#define QUERYNODE_H

#include "AqlNode.h"
#include <string>

namespace AQL {

class QueryNode : public AQL::AqlNode {
	virtual const std::string emitString() { return std::string("QueryNode"); }
};

} // namespace AQL

#endif