#include "AqlQueriesManager.h"

namespace AQL {

list<AqlNode> * AqlQueriesManager::GetInternalQueryList() {
	if (!this->queryList) {
		this->queryList = new list<AqlNode>;
	}
	return this->queryList;
}

AqlQueriesManager& AqlQueriesManager::operator=(const AqlQueriesManager& rhs) {
	return *this;
}

AqlQueriesManager::AqlQueriesManager(AqlQueriesManager& rhs) {
	
}

AqlQueriesManager::AqlQueriesManager() {
	//this->GetInternalQueryList()->push_back(*aqlQuery);
}

void AqlQueriesManager::IncludeQuery(const AqlNode * mainNode) {
	this->GetInternalQueryList()->push_back(*mainNode);
}

} // namespace