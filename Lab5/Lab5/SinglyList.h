#ifndef SINGLYLIST_H
#define SINGLYLIST_H
#include "Node.h"

class SinglyList
{
private:
	Node *head; // a pointer to the first node in the list
public:
	SinglyList(); // constructor
	~SinglyList(); // destructor
	// isEmpty determines whether the list is empty or not
	bool isEmpty() const;
	// insertNode inserts a new node at position "index"
	Node *insertNode(int index, double x);
	// findNode finds the position of the node with a given value
	int findNode(double x) const;
	// deleteNode deletes a node with a given value
	int deleteNode(double x);
	// displayList prints all the nodes in the list
	void displayList() const;

	// set head node
	void setHead(Node *);
	// get head node
	Node *getHead() const;
};
#endif
