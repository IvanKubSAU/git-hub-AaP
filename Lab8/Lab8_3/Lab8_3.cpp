#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int n = 5;

void main()
{
	srand(time(0));
	
	int A[n][n];
	int max;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand();
		}
	}

	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << "    ";
		}

		cout << endl;
	}


	max = A[0][0];
	for (int i = 0; i <= ceil((double)n / 2); i++)
	{
		for (int j = i; j <= n - i - 1; j++)
		{
			if(A[i][j] > max)
				max = A[i][j];
		}
	}

	cout << "max = " << max << endl;
	system("pause");
}
