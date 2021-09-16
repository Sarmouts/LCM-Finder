#include <iostream>
#include <cmath>
using namespace std;

double LCM(double a, double b)
{
	if (a / b == round(a / b) || b / a == round(b / a))
	{
		if (a < 0 || b < 0)
		{
			return fmin(a, b);
		}
		else return fmax(a, b);
	}
	else
	{
		return a * b;
	}
}
int main()
{
	while (true)
	{
		double a;
		double b;
		cout << "Enter a number: ";
		cin >> a;
		cout << "Enter another number: ";
		cin >> b;
		cout << "Their LCM: " << LCM(a, b) << endl << endl;
	}
	return 0;
}


