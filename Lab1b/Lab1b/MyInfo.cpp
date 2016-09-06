#include "MyInfo.h"
#include <iostream>
#include <ctime>
using namespace std;

MyInfo::MyInfo()
{
	name = "unknown";
	studID = "unknown";
}

MyInfo::MyInfo(string nameIn, string studIDIn)
{
	name = nameIn;
	studID = studIDIn;
}

string MyInfo::getName() const
{
	return name;
}

string MyInfo::getStudentID() const
{
	return studID;
}

void MyInfo::printArray()
{
	randomNum();
	cout << "My lucky numbers are: <";
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << ", ";
	}
	cout << "\b\b>" << endl;
}

void MyInfo::randomNum()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	bool repeated;
	do
	{
		repeated = false; //will break the loop at default
		for (auto i = 0; i < 10; i++)
		{
			//randomly generate 50 numbers into array
			num[i] = rand() % 50 + 1;

			for (auto j = 0; j < i; j++)
			{
				//check if the numbers generated are repeated
				if (num[i] == num[j])//if yes
					repeated = true; //then do not break the loop and will generate anothter 50 numbers
			}
		}
	} while (repeated);
}
