#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue()
{
	firstNode = NULL;
	endNode = NULL;
}

void Queue::Enqueue(int _iData)
{
	CNode* newNode = new CNode();

	newNode->setData(_iData);
	newNode->setNextNode(nullptr);
	
	if (firstNode == NULL)
	{
		firstNode = endNode = newNode;

		return;
	}

	endNode->setNextNode(newNode);
	endNode = newNode;
}

bool Queue::Dequeue()
{
	CNode* temp = firstNode;
	firstNode = temp->getNextNode();
	delete temp;

	return true;
}

bool Queue::Peek()
{
	if (firstNode == NULL)
	{
		return false;
	}

	cout << firstNode << endl;
	return true;
}

bool Queue::testHarness()
{
	Queue list;
	list.Enqueue(5);
	list.Enqueue(7);
	list.Enqueue(10);
	list.Enqueue(3);
	list.Enqueue(1);
	list.Enqueue(4);
	list.display();

	list.Dequeue();
	list.display();

	return true;
}