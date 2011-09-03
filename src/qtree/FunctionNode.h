#ifndef FUNCTIONNODE_H
#define FUNCTIONNODE_H

#include "AqlNode.h"

namespace AQL {

class FunctionNode : public AQL::AqlNode {
private:
	std::string _functionName;
	AQL::AqlNode * _argument;
public:
	void setFunctionName(const std::string& functionName) { _functionName = std::string(functionName); }
	void setArgument(AQL::AqlNode * argument) { this->_argument = argument; }
};

} // namespace AQL

#endif