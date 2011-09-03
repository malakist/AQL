#ifndef INTEGERNODE_H
#define INTEGERNODE_H

#include "AqlNode.h"
#include <string>
#include <sstream>

namespace AQL {

template<class T>
bool from_string(T& t, const std::string& s, std::ios_base& (*f)(std::ios_base&))
{
	std::stringstream iss(s);
	return !(iss >> f >> t).fail();
}

class IntegerNode : public AQL::AqlNode {
private:
	std::string _nodeValue;
public:
	explicit IntegerNode(const char * nodeValue) { this->_nodeValue = std::string(nodeValue); }
	const int ReturnInteger() { 
		int value;
		if (from_string<int>(value, _nodeValue, std::dec)) {
			return value;
		} else {
			return 0;
		}
	}
	const std::string emitString() const { return this->_nodeValue; }
};

} // namespace AQL

#endif