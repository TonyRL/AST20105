#include <iostream>
#include <string>
#include <fstream>
#include "StackArr.h"

using namespace std;

int main()
{
	string fileName;
	string str = "";
	cout << "Enter your file name" << endl;
	cin >> fileName;
	StackArr sArr(5);

	ifstream inputFile(fileName + ".txt");
	while (!inputFile.eof())
	{
		getline(inputFile, str);
		for (auto j = 0; j < str.length(); j++)
		{
			switch (str[j])
			{
				case '{':
					sArr.push('{');
					break;
				case '[':
					sArr.push('[');
					break;
				case'(':
					sArr.push('(');
					break;
				case ')':
					if (!sArr.isEmpty())
					{
						!(sArr.top() == '(') ? cout << "Error: Not equal" << endl : cout << "";
						sArr.pop();
					} else
						cout << "Error: Empty stack" << endl;
					break;
				case ']':
					if (!sArr.isEmpty())
					{
						!(sArr.top() == '[') ? cout << "Error: Not equal" << endl : cout << "";
						sArr.pop();
					} else
						cout << "Error: Empty stack" << endl;
					break;
				case '}':
					if (!sArr.isEmpty())
					{
						!(sArr.top() == '{') ? cout << "Error: Not equal" << endl : cout << "";
						sArr.pop();
					} else
						cout << "Error: Empty stack" << endl;
					break;
				default:
					break;
			}
		}
	}
	inputFile.close();
	sArr.isEmpty() ? cout << "The code is correct" << endl : cout << "The code is incorrect" << endl;

	system("pause");
	return 0;
}
