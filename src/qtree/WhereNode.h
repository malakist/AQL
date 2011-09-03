#ifndef WHERENODE_H
#define WHERENODE_H

#include "AqlNode.h"
#include <string>

namespace AQL {

class WhereNode : public AQL::AqlNode {
	const std::string emitString() const
	{
		return std::string("WhereNode");
	}
};

} // namespace AQL

#endif