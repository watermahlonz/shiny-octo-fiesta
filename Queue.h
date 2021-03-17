#ifndef __QUEUE_H__
#define __QUEUE_H__
#include "SingleLinkedList.h"

class Queue : public SingleLinkedList
{
protected:
	SingleLinkedList m_pContainer;
	CNode* endNode;

public:
	Queue();
	void Enqueue(int _iData);
	bool Dequeue();
	bool Peek();
	bool testHarness();
};

#endif // !__QUEUE_H__
