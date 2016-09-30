// Copyright 2016 - 2016 TonyRL
// MyInfo.cpp is part of Lab1b.
// 
// Lab1b is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Lab1b is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Lab1b. If not, see <http://www.gnu.org/licenses/>.
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
