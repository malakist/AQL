#ifndef COLUMNNODE_H
#define COLUMNNODE_H

#include "AqlNode.h"
#include <string>
#include <sstream>

namespace AQL {

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

} // namespace AQL

#endif