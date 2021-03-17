#ifndef _SINGLE_LINKEDLIST_H__
#define _SINGLE_LINKEDLIST_H__
#include "CNode.h"

class SingleLinkedList {

protected:
	CNode* firstNode;

public:
	SingleLinkedList();
	void Insert(int _iData);
	void Delete(int _iData);
	bool Search(int _iData);
	void display();
};

#endif