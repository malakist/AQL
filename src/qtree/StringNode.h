/*
 * StringNode.h
 *
 *  Created on: 21/08/2011
 *      Author: Rodrigo
 */

#ifndef STRINGNODE_H_
#define STRINGNODE_H_

#include "AqlNode.h"

namespace AQL {

class StringNode : public AQL::AqlNode {
public:
	StringNode();
	virtual ~StringNode();
};

} //namespace

#endif /* STRINGNODE_H_ */
