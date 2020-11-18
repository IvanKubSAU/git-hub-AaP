#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int n = 4, m = 5;

void main()
{
	setlocale(0, "rus");

	int A[n][m];
	int sum = 0, k = 0;
	double sa;
	
	srand(time(0));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			A[i][j] = rand();
			sum += A[i][j];
		}
	}
	cout << "Массив заролнен случайными числами." << endl;

	sa = (double)sum / (double)(n * m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if(A[i][j] > sa)
				k++;
		}
	}
	cout << "Количесвто элементов превосходящих ссреднее арифметическое значений элементов = " << k << endl;
}
