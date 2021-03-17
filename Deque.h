#ifndef __DEQUE_H__
#define __DEQUE_H__
#include "Queue.h"


class Deque : public Queue
{
public:
	Deque();
	void Enqueue_front(int _iData);
	void Enqueue_back(int _iData);
	bool Dequeue_front();
	bool Dequeue_back();
	bool peek_front();
	bool peek_back();
	bool testHarness();
};

#endif // !__DEQUE_H__
