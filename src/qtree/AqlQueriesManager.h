#ifndef AQLQUERIESMANAGER_H
#define AQLQUERIESMANAGER_H

#include <list>
#include "AqlNode.h"

using namespace std;

class AqlQueriesManager : AqlNode {
private:
	list<AqlNode> * queryList;
	
	AqlQueriesManager(AqlQueriesManager&);
	virtual AqlQueriesManager& operator=(const AqlQueriesManager& rhs) = 0;	
	list<AqlNode> * GetInternalQueryList();
public:
	AqlQueriesManager(const AqlNode * aqlQuery);	
};

#endif