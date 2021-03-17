#include <iostream>
#include "SingleLinkedList.h"
using namespace std;


void SingleLinkedList::Insert(int _iData)
{
	CNode* Node = new CNode();
	Node->setData(_iData);
	Node->setNextNode(firstNode);
	firstNode = Node;
}

void SingleLinkedList::Delete(int _iData)
{

	CNode* SearchedNode = firstNode;
	CNode* prev = NULL;

	while (SearchedNode != NULL)
	{
		if (SearchedNode->getData() == _iData)
		{
			cout << _iData << " has been found!!!" << endl;

			prev->setNextNode(SearchedNode->getNextNode());

			delete SearchedNode;

			return;
		}
		prev = SearchedNode;
		SearchedNode = SearchedNode->getNextNode();
	}
}

bool SingleLinkedList::Search(int _iData)
{
	CNode* SearchedNode = firstNode;

	while (SearchedNode != NULL)
	{
		if (SearchedNode->getData() == _iData)
		{
			cout << _iData << " has been found!!!" << endl;
			return true;
		}

		SearchedNode = SearchedNode->getNextNode();
	}
	return false;
}

void SingleLinkedList::display()
{
	CNode* displayNode = firstNode;

	while (displayNode)
	{
		cout << displayNode->getData() << " ";
		displayNode = displayNode->getNextNode();
	}

	cout << endl;
}

SingleLinkedList::SingleLinkedList()
{
	firstNode = NULL;
}
