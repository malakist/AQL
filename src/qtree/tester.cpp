#include <iostream>

#include "AqlNode.h"

int main (void) {
	AQL::AqlNode * n1 = new AQL::AqlNode();
	AQL::AqlNode * n2 = new AQL::AqlNode();
	n1->setRightNode(n2);
	if (n2->getLeftNode() == n1) std::cout << "sao iguais" << std::endl;
	
	return 0;
}
