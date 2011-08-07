#include <string>
#include "AqlNode.h"

using namespace std;

AqlNode::AqlNode() {
	this->childNodes = (vector<AqlNode*> *) 0;
}

std::vector<AqlNode*> * AqlNode::GetInternalVector(void) {
	if (!childNodes) 
		childNodes = new std::vector<AqlNode *>;	
	
	return childNodes;
}

AqlNode& AqlNode::operator=(AqlNode& rhs) {
	return *this;
}

void AqlNode::AddChildNode(AqlNode * node) {
	if (this->GetInternalVector()->size() < AqlNode::maxChildCount) {
		this->GetInternalVector()->push_back(node);
	} else {
		//throw exception;
	}
}

AqlNode * AqlNode::GetNodeAtPosition(const short position) {
	if (position < this->GetChildCount()) {
		return (AqlNode *) (*(this->GetInternalVector()))[position];
	} else {
		return (AqlNode *) 0;
	}
}

size_t AqlNode::GetChildCount(void) {
	(this->GetInternalVector())->size();
}