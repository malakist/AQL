#ifndef AQLQUERIESMANAGER_H
#define AQLQUERIESMANAGER_H

#include <list>
#include "AqlNode.h"

using namespace std;

class AqlQueriesManager {
private:
	list<AqlNode> * queryList;
	
	AqlQueriesManager(AqlQueriesManager&);
	AqlQueriesManager& operator=(const AqlQueriesManager& rhs);	
	list<AqlNode> * GetInternalQueryList();
public:
	AqlQueriesManager();
	void IncludeQuery(const AqlNode * mainNode);
};

#endif