// Copyright 2016 - 2016 TonyRL
// MyInfo.h is part of Lab1b.
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
