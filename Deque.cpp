#include "Deque.h"
#include <iostream>
using namespace std;

Deque::Deque()
{
	firstNode = NULL;
	endNode = NULL;
}

void Deque::Enqueue_front(int _iData)
{
	CNode* newNode = new CNode();
	newNode->setData(_iData);
	newNode->setNextNode(firstNode);

	if (firstNode == NULL)
	{
		firstNode = endNode = newNode;
	}

	firstNode = newNode;
}

void Deque::Enqueue_back(int _iData)
{
	CNode* newNode = new CNode();
	newNode->setData(_iData);
	newNode->setNextNode(nullptr);

	if (firstNode == NULL)
	{
		firstNode = endNode = newNode;
	}

	endNode->setNextNode(newNode);
	endNode = newNode;
}

bool Deque::Dequeue_front()
{
	if (firstNode == NULL)
	{
		return false;
	}

	CNode* temp = firstNode;
	firstNode = temp->getNextNode();
	delete temp;
	return true;
}

bool Deque::Dequeue_back()
{
	if (firstNode == NULL)
	{
		return false;
	}
	
	CNode* temp = firstNode;

	while (temp != NULL)
	{
		if (temp->getNextNode()->getNextNode() == NULL)
		{
			endNode = temp;
			endNode->setNextNode(nullptr);

			return true;
		}

		temp = temp->getNextNode();
	}


	return true;

}

bool Deque::peek_front()
{
	if (firstNode == NULL)
	{
		return false;
	}

	cout << firstNode << endl;
	return true;
}

bool Deque::peek_back()
{
	if (firstNode == NULL)
	{
		return false;
	}

	cout << endNode << endl;
	return true;
}

bool Deque::testHarness()
{
	Deque list;
	list.Enqueue_front(10);
	list.Enqueue_front(5);
	list.display();
	list.Enqueue_back(6);
	list.display();
	list.Dequeue_back();
	list.display();

	return true;
}