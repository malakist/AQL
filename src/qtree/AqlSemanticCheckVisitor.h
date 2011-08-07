#ifndef AQLSEMANTICCHECKVISITOR_H
#define AQLSEMANTICCHECKVISITOR_H

#include "AqlNodeVisitor.h"
#include "AqlNode.h"

class AqlSemanticCheckVisitor : public AqlNodeVisitor {
public:
	void PerformOperation(const AqlNode * node) const;
};

#endif