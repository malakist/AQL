#include "AqlSemanticCheckVisitor.h"
#include "AqlNode.h"
#include <iostream>

using namespace std;

namespace AQL {

void AqlSemanticCheckVisitor::PerformOperation(const AqlNode * node) const {
	cout << "Estou fazendo uma analise Semantica" << endl;
}

} // namespace