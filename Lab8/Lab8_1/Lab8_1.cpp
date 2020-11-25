#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int arraySize = 14;
int sum, mult;

void main()
{
	setlocale(0, "rus");

	sum = 0;
	mult = 1;

	srand(time(0));

	int mas[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		mas[i] = rand();
	}

	for (int i = 0; i < arraySize; i += 2)
	{
		sum += mas[i];
	}

	for (int i = 0; i < arraySize; i++)
	{
		if (mas[i] % 2 == 1)
			mult *= mas[i];
	}

	cout << "Сумма элементов чётных по индексу = " << sum << endl;
	cout << "Произведение нечётных элементов = " << mult << endl;
	system("pause");
}