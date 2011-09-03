/*
 * StringNode.h
 *
 *  Created on: 21/08/2011
 *      Author: Rodrigo
 */

#ifndef STRINGNODE_H_
#define STRINGNODE_H_

#include "AqlNode.h"
#include <string>

namespace AQL {

class StringNode : public AQL::AqlNode {
private:
	std::string _nodeValue;
public:
	explicit StringNode(const char * nodeValue) { this->_nodeValue = std::string(nodeValue); }
	virtual ~StringNode();
	const std::string emitString() const;
};

} //namespace

#endif /* STRINGNODE_H_ */
