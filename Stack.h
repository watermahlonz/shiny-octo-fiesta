#ifndef __STACK_H__
#define __STACK_H__
#include "SingleLinkedList.h"

class Stack : public SingleLinkedList
{
protected:
	SingleLinkedList m_pContainer;

public:
	void push(int _iData);
	bool pop();
	bool peek();
	bool isEmpty();
	bool testHarness();
};

#endif // !__STACK_H__
