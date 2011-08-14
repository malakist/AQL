#ifndef AQLNODEVISITOR_H
#define AQLNODEVISITOR_H

#include "AqlNode.h"

namespace AQL {

class AqlNodeVisitor {
public:
	void virtual performOperation(const AqlNode * node) = 0;
};

}	
	
#endif