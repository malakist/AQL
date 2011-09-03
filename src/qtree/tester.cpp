#include <iostream>

#include "AqlNode.h"
#include "LogicalCompNode.h"
#include "TreeWalker.h"
#include "IntegerNode.h"
#include "StringNode.h"

int main (void) {
	AQL::LogicalCompNode * compNode = new AQL::LogicalCompNode(AQL::Operator::EQ);
	AQL::IntegerNode * integerNode = new AQL::IntegerNode("1");
	AQL::IntegerNode * integerNode2 = new AQL::IntegerNode("14");
	AQL::StringNode * strNode = new AQL::StringNode("Valor Teste");
	
	compNode->addChildNode(integerNode);
	compNode->addChildNode(integerNode2);
	compNode->addChildNode(strNode);
	
	AQL::TreeWalker * treeWalker = new AQL::TreeWalker(compNode);
	treeWalker->PerformEmitString();
	
	std::cout << std::endl;
	
	return 0;
}
