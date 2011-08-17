#ifndef AQLQUERIESMANAGER_H
#define AQLQUERIESMANAGER_H

#include <list>
#include "AqlNode.h"

namespace AQL {

class AqlQueriesManager {
private:
	list<AqlNode> * queryList;
	
	AqlQueriesManager(AqlQueriesManager&);
	AqlQueriesManager& operator=(const AqlQueriesManager& rhs);	
	std::list<AqlNode> * GetInternalQueryList();
public:
	AqlQueriesManager();
	void IncludeQuery(const AqlNode * mainNode);
};
}

#endif