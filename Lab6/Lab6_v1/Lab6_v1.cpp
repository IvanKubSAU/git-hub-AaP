#include <iostream>
#include <math.h>

using namespace std;

const double E = 0.0001;
double x, n;

void main()
{
	int k = 0;
	double y, yM1;

	cout << "n = ";
	cin >> n;

	cout << "x = ";
	cin >> x;

	y = x;

	do
	{
		k++;
		yM1 = y;
		y = yM1 + (1.0 / n) * (x / (pow(yM1, n - 1)) - yM1);
	} while (fabs(y - yM1) > E);

	cout << "   ____\nn /\n\\/  x   = " << y << endl;
}