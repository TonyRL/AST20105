#include "StackArr.h"
#include "QueueArr.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str = "";
	string lowStr = "";
	string sArrResult = "";
	string qArrResult = "";

	cout << "Input a string: ";
	cin >> str;
	transform(str.begin(), str.end(), str.begin(), tolower);

	StackArr sArr(str.length());
	QueueArr qArr(str.length());

	for (auto i = 0; i < str.length(); i++)
	{
		sArr.push(str[i]);
		qArr.enqueue(str[i]);
	}

	for (auto i = 0; i < str.length(); i++)
	{
		sArrResult += sArr.top();
		sArr.pop();
		qArrResult += qArr.dequeue();
	}

	cout << str << " is";
	sArrResult == qArrResult ? cout << " " : cout << " not";
	cout << " a palindrome" << endl;

	system("pause");
	return 0;
}
