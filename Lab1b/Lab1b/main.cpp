//============================================================================
// Name        : AST20105_LAB1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "MyInfo.h"
using namespace std;

int main()
{
	MyInfo ME("Apple", "12345678"); //Key in your name and student ID

	cout <<"Name: " << ME.getName() << endl;
	cout <<"Student ID: " <<  ME.getStudentID() << endl;
	ME.printArray();
	return 0;

}
