#include "Stack.h"
#include <iostream>
using namespace std;

void Stack::push(int _iData)
{
	CNode* newNode = new CNode();
	newNode->setData(_iData);
	newNode->setNextNode(firstNode);
	firstNode = newNode;
}

bool Stack::pop()
{
	if (isEmpty())
	{
		cout << "Nothing to pop!!!" << endl;
		return false;
	}

	CNode* temp = firstNode;
	firstNode = temp->getNextNode();
	delete temp;
	return true;
}

bool Stack::isEmpty()
{
	if (firstNode == NULL)
	{
		cout << "Stack is empty" << endl;
		return true;
	}

	cout << "Stack is not empty" << endl;
	return false;
}

bool Stack::peek()
{
	if (isEmpty())
	{
		return false;
	}

	cout << firstNode->getData() << endl;
	return true;
}


bool Stack::testHarness()
{
	Stack list;
	list.push(5);
	list.push(9);
	list.push(1);
	list.push(2);
	list.push(3);
	list.push(4);

	list.display();

	list.pop();

	list.display();
	list.peek();

	return true;
}