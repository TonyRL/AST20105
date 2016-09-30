#include <iostream>
#include <cmath>
using namespace std;


double f(double &x, double &a, double &b, double &c, double &d)
{
	return a * pow(x, 3) + b * pow(x, 2) + c * x + d;
}

double bisect(double &x1, double &x2, double &a, double &b, double &c, double &d)
{
	auto f1 = f(x1, a, b, c, d);
	auto f2 = f(x2, a, b, c, d);
	auto mid = (x1 + x2) / 2;
	auto fMid = f(mid, a, b, c, d);

	if (f2 * f1 > 0)
		return NULL;

	if (fMid < 0)
	{
		cout << "fMid < 0" << endl;
		x1 = mid;
	} else
	{
		cout << "fMid > 0" << endl;
		x2 = mid;
	}

	if (abs(x2 - x1) < 0.0001)
		return x1;
	return bisect(x1, x2, a, b, c, d);
}


int main()
{
	double a, b, c, d; // Coefficients Ax^3 + Bx^2 + Cx + D
	double x1 = 0, x2 = 0;
	cout << "Input coefficients of Ax^3 + Bx^2 + Cx + D (delimited with a space): ";
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;


	while (x1 >= x2)
	{
		cout << "Input roots x1 and x2: ";
		cin >> x1;
		cin >> x2;
		if (x1 >= x2)
			cout << "x1 must be less then x2." << endl;
	}


	auto root = bisect(x1, x2, a, b, c, d);

	if (root == NULL)
		cout << "No root found between x1 and x2" << endl;
	else
		cout << "Root found at " << root << endl;

	system("pause");
	return 0;
}
