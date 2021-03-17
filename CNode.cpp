#include "CNode.h"
#include <iostream>

CNode::CNode()
{
	data = NULL;
	nextNode = NULL;
}

void CNode::setData(int iData)
{
	data = iData;
}

int CNode::getData() const
{
	return data;
}

void CNode::setNextNode(CNode* nextNodel)
{
	nextNode = nextNodel;
}
CNode* CNode::getNextNode() const
{
	return nextNode;
}