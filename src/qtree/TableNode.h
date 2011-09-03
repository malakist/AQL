#ifndef TABLENODE_H
#define TABLENODE_H

#include "AqlNode.h"
#include <string>

namespace AQL {

class TableNode : public AQL::AqlNode 
{
private:
	std::string _tableName;
public:
	void setTableName(const char * tableName) { this->_tableName = std::string(tableName); }
	const std::string emitString() const { return std::string("TableNode:") + _tableName; }
};

} // namespace AQL

#endif