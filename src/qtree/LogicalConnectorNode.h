#ifndef LOGICALCONNECTORNODE_H
#define LOGICALCONNECTORNODE_H

#include "AqlNode.h"

namespace AQL {

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

} // namespace AQL

#endif