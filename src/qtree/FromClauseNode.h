#ifndef FROMCLAUSENODE_H
#define FROMCLAUSENODE_H

#include "AqlNode.h"
#include <string>

namespace AQL {

class FromClauseNode : public AQL::AqlNode {
	virtual const std::string emitString() const { return std::string("FromClauseNode"); }
};

} // namespace AQL

#endif