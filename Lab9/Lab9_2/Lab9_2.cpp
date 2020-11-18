#include <iostream>
#include <string.h>

using namespace std;

void main()
{
	setlocale(0, "rus");

	int k = 0;
	char strs[5][256];

	for (int i = 0; i < 5; i++)
	{
		cout << "Введите " << i + 1 << " строку: ";
		cin.getline(strs[i], 256);
	}

	for (int i = 0; i < 5; i++)
	{
		if (strcmp(strs[i], "") == 0)
			k++;
	}

	cout << "Количество непустых строк = " << 5 - k << endl;
}