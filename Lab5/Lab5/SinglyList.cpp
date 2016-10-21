#include "SinglyList.h"
#include "Node.h"
#include <string>
#include <iostream>

using namespace std;

SinglyList::SinglyList()
{
	head = nullptr;
}

SinglyList::~SinglyList()
{
	Node *currNode = head;
	Node *nextNode;
	while (currNode != nullptr)
	{
		nextNode = currNode->next;
		delete currNode;
		currNode = nextNode;
	}
}

bool SinglyList::isEmpty() const
{
	return (head == nullptr);
}

int SinglyList::findNode(double x) const
{
	auto currNode = head;
	auto currIndex = 1;
	while (currNode && currNode->data != x)
	{
		currNode = currNode->next;
		currIndex++;
	}
	if (currNode)
		return currIndex;
	return 0;
}

Node *SinglyList::insertNode(int index, double x)
{
	if (index < 0)
		return nullptr;
	auto currIndex = 1;
	auto currNode = head;
	while (currNode && index > currIndex)
	{
		currNode = currNode->next;
		currIndex++;
	}
	if (index > 0 && currNode == nullptr)
		return nullptr;
	auto newNode = new Node;
	newNode->data = x;
	if (index == 0)
	{
		newNode->next = head;
		head = newNode;
	} else
	{
		newNode->next = currNode->next;
		currNode->next = newNode;
	}
	return newNode;
}

int SinglyList::deleteNode(double x)
{
	Node *prevNode = nullptr;
	auto currNode = head;
	auto currIndex = 1;
	while (currNode && currNode->data != x)
	{
		prevNode = currNode;
		currNode = currNode->next;
		currIndex++;
	}
	if (currNode)
	{
		if (prevNode)
		{
			prevNode->next = currNode->next;
			delete currNode;
		} else
		{
			head = currNode->next;
			delete currNode;
		}
		return currIndex;
	}
	return 0;
}

void SinglyList::displayList() const
{
	auto num = 0;
	auto currNode = head;
	while (currNode != nullptr)
	{
		cout << currNode->data << endl;
		currNode = currNode->next;
		num++;
	}
	cout << "Number of nodes in the list: " << num << endl;
}

void SinglyList::setHead(Node *nodeIn)
{
	head = nodeIn;
}

Node *SinglyList::getHead() const
{
	return head;
}
