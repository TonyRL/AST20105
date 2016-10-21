#include "MySinglyList.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "=========================================" << endl;
	cout << " Create a new list with intialized nodes " << endl;
	cout << "=========================================" << endl;
	MySinglyList list;

	cout << "=========================================" << endl;
	cout << "              Add Value(10)              " << endl;
	cout << "=========================================" << endl;

	list.addValue(10);
	list.displayList();

	cout << "=========================================" << endl;
	cout << "            Check Sorted Order           " << endl;
	cout << "=========================================" << endl;
	cout << "The list is in " << (list.checkSortedOrder() ? "sorted order." : "unsorted order.") << "\n" << endl;

	cout << "=========================================" << endl;
	cout << "         Move Last Node To Begin()       " << endl;
	cout << "=========================================" << endl;

	list.moveLastNodeToBegin();
	list.displayList();

	cout << "=========================================" << endl;
	cout << "         Insert Node with 888(14.6)      " << endl;
	cout << "=========================================" << endl;
	list.insertNodewith888(14.6);
	list.displayList();

	system("pause");
	return 0;
}
