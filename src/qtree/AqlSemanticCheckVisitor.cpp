#include "AqlSemanticCheckVisitor.h"
#include "AqlNode.h"
#include <iostream>

using namespace std;

void AqlSemanticCheckVisitor::PerformOperation(const AqlNode * node) const {
	cout << "Estou fazendo uma analise Semantica" << endl;
}