typedef enum {
	equals, notEquals, GreaterThan, LessThan, GreaterEquals, LessEquals
} logicalOperatorType;

typedef enum {
	operatorNot, operatorAnd, operatorOr
} logicalConectorType;

typedef enum {
	logicalOperator, logicalConector, clauseDeclarator
} nodeType;