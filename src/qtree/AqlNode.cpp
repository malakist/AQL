#include <string>
#include <cstdarg>
#include <vector>
#include <iostream>
#include "AqlNode.h"

namespace AQL {

AqlNode::AqlNode() : childCount(0), location("") {
	this->childNodes = new std::vector<AqlNode*>();
	this->leftNode = (AqlNode *) 0;
	this->rightNode = (AqlNode *) 0;
	
	std::cout << "Criou um node" << std::endl;
}

AqlNode::~AqlNode(void) {
	delete this->childNodes;
}

AqlNode * AqlNode::getNodeAtPosition(const int position) const {
	return (*(this->childNodes))[position];
}

std::size_t AqlNode::getChildCount(void) const {
	return this->childNodes->size();
}

void AqlNode::setLocation(const char * l) {
	location = std::string(l);
}

const char * AqlNode::getLocation(void) const {
	return location.c_str();
}

void AqlNode::addChildNode(AqlNode * node) {
	this->childNodes->push_back(node);
}

void AqlNode::setRightNode(AqlNode * node) {
	this->rightNode = node;
	this->rightNode->setLeftNode(this);
}

void AqlNode::setLeftNode(AqlNode * node) {
	this->leftNode = node;	
}

AqlNode * AqlNode::getLeftNode(void) {
	return this->leftNode;
}

} // namespace
