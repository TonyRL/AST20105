#include "StackArr.h"
#include <string>
#include <iostream>

using namespace std;

StackArr::StackArr(int size)
{
	maxTop = size;
	values = new char[size];
	stackTop = -1;
}

StackArr::~StackArr()
{
	delete[] values;
}

bool StackArr::isEmpty() const
{
	return stackTop == -1;
}


bool StackArr::isFull() const
{
	return stackTop == maxTop;
}

void StackArr::push(const char &x)
{
	if (isFull())
		cout << "Error! The stack is full!" << endl;
	else
		values[++stackTop] = x;
}

char StackArr::pop()
{
	if (isEmpty())
	{
		cout << "Error! The stack is empty!" << endl;
		return -1;
	}
	return values[stackTop--];
}

char StackArr::top() const
{
	if (isEmpty())
	{
		cout << "Error! The stack is empty!" << endl;
		return -1;
	}
	return values[stackTop];
}

void StackArr::displayStack() const
{
	cout << "Top -->";
	for (auto i = stackTop; i >= 0; i--)
		cout << "\t|\t" << values[i] << "\t|" << endl;
	cout << "\t|---------------|" << endl << endl;
}
