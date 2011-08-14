#include <iostream>
#include "AqlQueriesManager.h"
#include "AqlInclude.h"

using namespace std;
using namespace AQL;

int main (void) {
	AqlNode *node, *childNode1, *childNode2;

	childNode1 = new AqlNode(Equals, 0);
	childNode2 = new AqlNode(Equals, 0);
	node = new AqlNode(Equals, 2, childNode1, childNode2);
	
	delete node;
	
	return 0;
}