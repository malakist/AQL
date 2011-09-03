#ifndef SELECTNODE_H
#define SELECTNODE_H

#include "AqlNode.h"
#include <string>

namespace AQL {

class SelectNode : public AQL::AqlNode {
	const std::string emitString() const { return std::string("SelectNode"); }
};

}

#endif