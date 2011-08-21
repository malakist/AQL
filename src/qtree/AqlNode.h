#ifndef AQLNODE_H
#define AQLNODE_H

#include <iostream>
#include <vector>

namespace AQL {

class AqlNode {
private:
	int childCount;
	std::vector<AqlNode*> *childNodes;
protected:
	AqlNode * getNodeAtPosition(const int position) const;
	std::size_t getChildCount(void) const;
	std::string location;
public:			
	explicit AqlNode();
	virtual ~AqlNode();
	AqlNode& operator=(AqlNode& rhs);
	void setLocation(const char *);
	const char * getLocation(void) const;
	void addChildNodes(const short nodeCount, ...);
};

} 
#endif
