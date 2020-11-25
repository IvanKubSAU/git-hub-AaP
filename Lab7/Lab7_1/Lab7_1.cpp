#include <iostream>
#include <math.h>

using namespace std;

double S;
int n, k;

void main()
{
	S = 0;
	k = 1;

	cout << "n = ";
	cin >> n;

	double d;
	for (int i = k; i <= n; i++)
	{
		d = 1;
		for (int j = 2; j <= i; j++)
		{
			d *= j;
		}

		S += pow(i - 4, 3) * (i + 7) / d;
	}

	cout << "S = " << S << endl;
	system("pause");

}