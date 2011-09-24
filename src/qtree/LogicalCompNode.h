#ifndef LOGICALCOMPNODE_H
#define LOGICALCOMPNODE_H

#include "AqlNode.h"
#include <string>

namespace AQL {

class Comparison {
public:	
	struct Operator {
		enum OperatorType {
			EQ,
			NE,
			GT,
			LT,
			GE,
			LE,
		};
	};
};

typedef AQL::Comparison::Operator Operator;
typedef AQL::Comparison::Operator::OperatorType OperatorType;

class LogicalCompNode : public AQL::AqlNode {
private:
	AQL::OperatorType _logCompType;
public:
	explicit LogicalCompNode(AQL::OperatorType opType) { this->_logCompType = opType; }
	const std::string emitString() const 
	{
		std::string result = "LogicalCompNode:";
		switch(this->_logCompType) {
			case Operator::EQ: return result + "EQ";
			case Operator::NE: return result + "NE";
			case Operator::GT: return result + "GT";
			case Operator::LT: return result + "LT";
			case Operator::GE: return result + "GE";
			case Operator::LE: return result + "LE";
			default: return result;
		}
	}
};

} // namespace AQL

#endif