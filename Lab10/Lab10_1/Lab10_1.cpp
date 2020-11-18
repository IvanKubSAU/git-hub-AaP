#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int n = 5;
const int m = 5;

void main()
{
	setlocale(0, "rus");
	srand(time(0));

	int mat[n][m];

	cout << "Массив до сортировки:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mat[i][j] = rand();
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	int buf;
	for (int i = 0; i < n; i += 2)
	{
		for (int j = 0; j < m - 1; j++)
		{
			for (int k = 0; k < m - 1 - j; k++)
			{
				if(mat[i][k] < mat[i][k + 1])
				{
					buf = mat[i][k];
					mat[i][k] = mat[i][k + 1];
					mat[i][k + 1] = buf;
				}

			}
		}
	}

	cout << "Массив после сортировки:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}
