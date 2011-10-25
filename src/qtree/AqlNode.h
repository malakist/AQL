#ifndef AQLNODE_H
#define AQLNODE_H

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

namespace AQL {

template<class T>
bool from_string(T& t, const std::string& s, std::ios_base& (*f)(std::ios_base&))
{
	std::stringstream iss(s);
	return !(iss >> f >> t).fail();
}

class AqlNode {
private:
	int childCount;
	std::vector<AqlNode*> *childNodes;
	AqlNode * rightNode;
	AqlNode * leftNode;
	AqlNode(AqlNode& rhs);
	AqlNode& operator=(AqlNode& rhs);
	std::string _nodeValue;
protected:
	const AqlNode * getNodeAtPosition(const int position) const;
	std::size_t getChildCount(void) const;
	std::string location;
public:			
	explicit AqlNode();
	virtual ~AqlNode();
	void setLocationText(const char *);
	const char * getLocation(void) const;
	void setNodeValue(const std::string&);
	void setNodeValue(const char *);
	void addChildNode(AqlNode *);
	void setRightNode(AqlNode *);
	void setLeftNode(AqlNode *);
	AqlNode * getLeftNode(void) const;
	virtual const std::string emitString() const;
	std::vector<AqlNode*> getChildNodes(void) const;
};

class ColumnNode : public AQL::AqlNode {
private:
	std::string _tableName;
	std::string _columnName;
public:
	void setTableName(const std::string& tableName) { _tableName = std::string(tableName); }
	void setColumnName(const std::string& columnName) { _columnName = std::string(columnName); }
	const std::string emitString() const 
	{
		std::string result("ColumnNode:");
		result += _tableName;
		result += "->";
		result += _columnName;
		return result;
	}
};

class FloatNode : public AQL::AqlNode {
private:
	std::string _nodeValue;
public:
	explicit FloatNode(const char * nodeValue) { this->_nodeValue = std::string(nodeValue); }
	
};

class FromClauseNode : public AQL::AqlNode {
	virtual const std::string emitString() const { return std::string("FromClauseNode"); }
};

class FunctionNode : public AQL::AqlNode {
private:
	std::string _functionName;
	AQL::AqlNode * _argument;
public:
	void setFunctionName(const std::string& functionName) { _functionName = std::string(functionName); }
	void setArgument(AQL::AqlNode * argument) { this->_argument = argument; }
};

class IntegerNode : public AQL::AqlNode {
private:
	std::string _nodeValue;
public:
	explicit IntegerNode(const char * nodeValue) { this->_nodeValue = std::string(nodeValue); }
	explicit IntegerNode(void) {}
	const int ReturnInteger() { 
		int value;
		if (from_string<int>(value, _nodeValue, std::dec)) {
			return value;
		} else {
			return 0;
		}
	}
	const std::string emitString() const { return std::string("IntegerNode") /*this->_nodeValue*/; }
};

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

class LogicalConnectorTypes {
public:
	enum Type { NOT, AND, OR };
};

class LogicalConnectorNode : public AQL::AqlNode {
private:
	AQL::LogicalConnectorTypes::Type _connectorType;
public:
	enum Type {NOT, AND, OR};
	explicit LogicalConnectorNode(AQL::LogicalConnectorTypes::Type connectorType) { this->_connectorType = connectorType; }
};

class MembersNode : public AQL::AqlNode {};

class PredicateNode : public AQL::AqlNode {};

class QueryNode : public AQL::AqlNode {
	virtual const std::string emitString() { return std::string("QueryNode"); }
};

class SelectNode : public AQL::AqlNode {
	const std::string emitString() const { return std::string("SelectNode"); }
};

class StringNode : public AQL::AqlNode {
private:
	std::string _nodeValue;
public:
	explicit StringNode(const char * nodeValue) { this->_nodeValue = std::string(nodeValue); }
	virtual ~StringNode();
	const std::string emitString() const;
};

class TableNode : public AQL::AqlNode 
{
private:
	std::string _tableName;
public:
	void setTableName(const char * tableName) { this->_tableName = std::string(tableName); }
	const std::string emitString() const { return std::string("TableNode:") + _tableName; }
};

class WhereNode : public AQL::AqlNode {
	const std::string emitString() const
	{
		return std::string("WhereNode");
	}
};

} // namespace AQL
#endif
