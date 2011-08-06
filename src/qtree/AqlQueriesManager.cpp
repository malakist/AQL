#include "AqlQueriesManager.h"

list<AqlNode> * AqlQueriesManager::GetInternalQueryList() {
	if (!this->queryList) {
		this->queryList = new list<AqlNode>;
	}
	return this->queryList;
}

AqlQueriesManager::AqlQueriesManager(AqlQueriesManager& rhs) {
	
}

AqlQueriesManager::AqlQueriesManager(const AqlNode * aqlQuery) {
	this->GetInternalQueryList()->push_back(*aqlQuery);
}