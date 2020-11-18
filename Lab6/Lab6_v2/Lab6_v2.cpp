#include <iostream>
#include <math.h>

using namespace std;

const double E = 0.0001;
double x, n;

double Y(int k);

void main()
{
	int k = 0;
	double y;

	cout << "n = ";
	cin >> n;

	cout << "x = ";
	cin >> x;

	do
	{
		k++;
		y = Y(k);
	} while (fabs(y - Y(k - 1)) > E);

	cout << "   ____\nn /\n\\/  x   = " << y << endl;
}

double Y(int k)
{
	if (k <= 0)
		return x;
	else
	{
		double y = Y(k - 1);
		return y + (1.0 / n) * (x / (pow(y, n - 1)) - y);
	}
}