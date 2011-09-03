#ifndef AQLNODE_H
#define AQLNODE_H

#include <iostream>
#include <vector>

namespace AQL {

class AqlNode {
private:
	int childCount;
	std::vector<AqlNode*> *childNodes;
	AqlNode * rightNode;
	AqlNode * leftNode;
protected:
	const AqlNode * getNodeAtPosition(const int position) const;
	std::size_t getChildCount(void) const;
	std::string location;
public:			
	explicit AqlNode();
	virtual ~AqlNode();
	void setLocation(const char *);
	const char * getLocation(void) const;
	void addChildNode(AqlNode *);
	void setRightNode(AqlNode *);
	void setLeftNode(AqlNode *);
	AqlNode * getLeftNode(void) const;
	virtual const std::string emitString() const;
	std::vector<AqlNode*> getChildNodes(void) const;
};

} 
#endif
