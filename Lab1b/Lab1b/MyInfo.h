#ifndef MYINFO_H
#define MYINFO_H
#include <string>
using namespace std;

class MyInfo
{
	string name, studID;
	int num[10];

public:
	MyInfo();
	MyInfo(string, string);
	string getName() const;
	string getStudentID() const;
	void printArray();
	void randomNum();
};
#endif
