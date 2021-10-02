#include <iostream>
#include <cmath>
using namespace std;

int MKD(int x, int y)
{
	int MKD = 0;
	for (int i = 0; i >= 0; i++)
	{
		if (x == 0)
		{
			MKD = abs(y);
			break;
		}
		else if (y == 0)
		{
			MKD = abs(x);
			break;
		}
		else if (abs(x) > abs(y))
		{
			x %= abs(y);
		}
		else if (abs(x) < abs(y))
		{
			y %= abs(x);
		}
	}
	return MKD;
}
int LCM(int a, int b)
{
	if (a < 0 && b < 0)
	{
		return -a * b / MKD(a, b);
	}
	else return a * b / MKD(a, b);
}
int main()
{
	while (true)
	{
		int a;
		int b;
		cout << "Enter a number: ";
		cin >> a;
		cout << "Enter another number: ";
		cin >> b;
		cout << "Their LCM: " << LCM(a, b) << endl << endl;
	}
	return 0;
}


