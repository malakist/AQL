#ifndef AQLNODE_H
#define AQLNODE_H

#include <iostream>
#include <vector>
#include "AqlInclude.h"

class AqlNode {
private:
	static const short maxChildCount = 100;
	std::vector<AqlNode*> * childNodes;
	std::vector<AqlNode*> * GetInternalVector();
	
public:	
	aqlNodeType NodeType;
	
	AqlNode();
	AqlNode& operator=(AqlNode& rhs);
	void AddChildNode(AqlNode * node);
	AqlNode * GetNodeAtPosition(const short position);
	std::size_t GetChildCount(void);
};

#endif