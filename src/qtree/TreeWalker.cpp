#include "TreeWalker.h"
#include <iostream>
#include <vector>
#include <string>

namespace AQL {

TreeWalker::TreeWalker(const AQL::AqlNode * node) {
	this->_node = node;
}

void
TreeWalker::RecursiveEmitString(const AQL::AqlNode * node, unsigned short& indentLevel) const {
	for (unsigned short i = 0; i < indentLevel; ++i) std::cout << "\t";
	std::cout << node->emitString() << std::endl;
	
	std::vector<AQL::AqlNode *> childNodes = node->getChildNodes();
	std::vector<AQL::AqlNode *>::iterator it;
	
	indentLevel++;
	
	for (it = childNodes.begin(); it != childNodes.end(); it++) {
		RecursiveEmitString(*it, indentLevel);
	}
	
	indentLevel--;
}

void
TreeWalker::PerformEmitString(void) const {
	if (!this->_node) {
		std::cout << "Nao existe um node selecionado" << std::endl;
		return;
	} 
	
	unsigned short indentLevel = 0;
	RecursiveEmitString(_node, indentLevel);
}

} // namespace AQL