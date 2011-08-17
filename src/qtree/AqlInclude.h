#ifndef AQLINCLUDE_H
#define AQLINCLUDE_H

namespace AQL {

typedef enum {
	Equals, NotEquals, GreaterThan, LessThan, GreaterEquals, LessEquals, 
	OperatorNot, OperatorAnd, OperatorOr, TableDeclaration, ColumnDeclaration,
	ConstantValue, Expression
} AqlNodeType;

};

#endif 
