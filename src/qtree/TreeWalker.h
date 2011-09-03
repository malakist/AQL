#ifndef TREEWALKER_H
#define TREEWALKER_H

#include "AqlNode.h"

namespace AQL {

class TreeWalker {
private:
	const AQL::AqlNode * _node;
	void RecursiveEmitString(const AQL::AqlNode * node, unsigned short& indentLevel) const;
public:
	explicit TreeWalker(const AQL::AqlNode * node);
	void PerformEmitString() const;
};

} // namespace AQL

#endif