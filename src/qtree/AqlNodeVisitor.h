#ifndef AQLNODEVISITOR_H
#define AQLNODEVISITOR_H

#include "AqlNode.h"

class AqlNodeVisitor {
public:
	void virtual performOperation(const AqlNode * node) = 0;
};

#endif