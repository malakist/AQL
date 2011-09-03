#include <iostream>

#include "AqlNode.h"
#include "LogicalCompNode.h"

int main (void) {
	AQL::LogicalCompNode * compNode = new AQL::LogicalCompNode(AQL::Operator::EQ);
	return 0;
}
