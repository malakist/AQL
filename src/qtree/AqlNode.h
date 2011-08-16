#ifndef AQLNODE_H
#define AQLNODE_H

#include <iostream>
#include <vector>
#include "AqlInclude.h"

namespace AQL {

class AqlNode {
private:
	int childCount;
	std::vector<AqlNode*> *childNodes;
	AqlNodeType nodeType;
public:			
	explicit AqlNode(AqlNodeType, int, ...);
	AqlNode& operator=(AqlNode& rhs);
	AqlNode * GetNodeAtPosition(const int position);
	int GetChildCount(void);
	static AqlNode* CreateDefaultNode(void);
};

} 
#endif
