#ifndef QUEUEARR_H
#define QUEUEARR_H

class QueueArr
{
	int front;
	int back;
	int counter;
	int maxSize;
	char *values;

public:
	explicit QueueArr(int);
	~QueueArr();

	bool isEmpty() const;
	bool isFull() const;
	bool enqueue(char x);
	char dequeue();
	void displayQueue() const;
};

#endif
