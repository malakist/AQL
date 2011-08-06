#ifndef AQLSEMANTICCHECKVISITOR_H
#define AQLSEMANTICCHECKVISITOR_H

#include "AqlNodeVisitor.h"
#include "AqlNode.h"

class AqlSemanticCheckVisitor : public AqlNodeVisitor {
public:
	virtual void PerformOperation(const AqlNode * node);
};

#endif