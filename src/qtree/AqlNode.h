#ifndef AQLNODE_H
#define AQLNODE_H

#include <iostream>
#include <vector>
#include "AqlInclude.h"

namespace AQL {



class AqlNode {
private:
	typedef std::vector<AqlNode*> AqlNodeList;

	int childCount;
	AqlNodeList *childNodes;
	AqlNodeType nodeType;
public:			
	explicit AqlNode(AqlNodeType, int, ...);
	AqlNode& operator=(AqlNode& rhs);
	AqlNode * GetNodeAtPosition(const short position);
	int GetChildCount(void);
};

} 
#endif