#ifndef AQLINCLUDE_H
#define AQLINCLUDE_H

typedef enum {
	Equals, NotEquals, GreaterThan, LessThan, GreaterEquals, LessEquals, 
	OperatorNot, OperatorAnd, OperatorOr, TableDeclaration, ColumnDeclaration,
	ConstantValue, Expression
} aqlNodeType;

#endif