#ifndef STACKARR_H
#define STACKARR_H

class StackArr
{
	int maxTop;
	int stackTop;
	char *values;

public:
	explicit StackArr(int);
	~StackArr();
	bool isEmpty() const;
	bool isFull() const;
	char top() const;
	void push(const char &x);
	char pop();
	void displayStack() const;
};
#endif
