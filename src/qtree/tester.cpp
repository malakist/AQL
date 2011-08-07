#include <iostream>
#include "AqlQueriesManager.h"
#include "AqlInclude.h"

using namespace std;

int main (void) {
	AqlNode *node, *childNode1, *childNode2;

	node = new AqlNode;
	node->NodeType = Equals;
	
	childNode1 = new AqlNode;
	childNode1->NodeType = ConstantValue;
	
	node->AddChildNode(childNode1);
	
	childNode2 = new AqlNode;
	childNode2->NodeType = Expression;
	
	node->AddChildNode(childNode2);
	
	//childNode1 = new AqlNode;
	//childNode2 = new AqlNode;
	
	// AqlQueriesManager * mgr = new AqlQueriesManager();
	// mgr->IncludeQuery(node);
	
	cout << "Objeto criado" << endl;
	
	cout << "Quantidade de nodes filhos existente: " << node->GetChildCount() << endl;
	
	delete node;
	
	return 0;
}