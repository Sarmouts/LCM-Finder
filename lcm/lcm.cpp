#include <iostream>
#include <cmath>
using namespace std;

double LCM(double a, double b)
{
	if (a / b == round(a / b) || b / a == round(b / a))
	{
		if (a < 0 && b < 0)
		{
			return fmin(a, b);
		}
		else if (a > 0 && b < 0 || a < 0 && b > 0)
		{
			if (abs(a) > abs(b))
			{
				if (a < 0)
				{
					return a;
				}
				else return -a;
			}
			else {
				if (b < 0)
				{
					return b;
				}
				else return -b;
			}
		}
		else
		{
			return fmax(a, b);
		}
	}
	else if (a / 2 == round(a / 2) && b / 2 == round(b / 2))
	{
		if (a < 0 && b < 0)
		{
			return -a * b / 2;
		}
		else
		{
			return a * b / 2;
		}
	}
	else
	{
		if (a < 0 && b < 0)
		{
			return -a * b;
		}
		else
		{
			return a * b;
		}
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


