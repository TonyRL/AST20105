#include "Node.h"
#include "SinglyList.h"
#include "MySinglyList.h"
#include <iostream>
using namespace std;

MySinglyList::MySinglyList()
{
	sLL.insertNode(0, 3.8);
	sLL.insertNode(1, 4.6);
	sLL.insertNode(2, 4.6);
	sLL.insertNode(3, 0.2);
	sLL.insertNode(4, 9.1);
	displayList();
}

void MySinglyList::displayList() const
{
	sLL.displayList();
}

bool MySinglyList::checkSortedOrder() const
{
	auto currNode = sLL.getHead();
	bool smaller;
	while (currNode)
	{
		smaller = currNode->data <= currNode->next->data;
		if (smaller)
			currNode = currNode->next;
		else
			return false;
	}
	return true;
}

void MySinglyList::addValue(double) const
{
	auto currNode = sLL.getHead();
	while (currNode != nullptr)
	{
		currNode->data += 10;
		currNode = currNode->next;
	}
}

void MySinglyList::insertNodewith888(double value)
{
	auto currNode = sLL.getHead();
	for (auto i = 1; currNode; currNode = currNode->next , ++i)
		if (abs(value - currNode->data) < 2 * numeric_limits<double>::epsilon())
			sLL.insertNode(i, 888);
}


Node *MySinglyList::moveLastNodeToBegin()
{
	Node *secLast = nullptr;
	auto currNode = sLL.getHead();
	while (currNode->next != nullptr)
	{
		secLast = currNode;
		currNode = currNode->next;
	}
	currNode->next = sLL.getHead();
	sLL.setHead(currNode);
	secLast->next = nullptr;

	return currNode;
}
