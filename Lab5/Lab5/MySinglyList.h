#ifndef MYSINGLYLIST_H
#define MYSINGLYLIST_H

#include "SinglyList.h"
#include "Node.h"

class MySinglyList
{
	SinglyList sLL;

public:
	MySinglyList(); // Initialize nodes and call displayList() to display all nodes
	void displayList() const; // Call displayList() in SinglyList class to display all attached nodes
	bool checkSortedOrder() const; //  Check linked list order.  Return true if in ascending order
	void addValue(double) const; // Add value to all nodes
	void insertNodewith888(double); // Insert a new node with value 888 after any node that has the same input value
	Node *moveLastNodeToBegin();
};

#endif
