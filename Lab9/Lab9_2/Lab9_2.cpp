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
		cout << "������� " << i + 1 << " ������: ";
		cin.getline(strs[i], 256);
	}

	for (int i = 0; i < 5; i++)
	{
		if (strcmp(strs[i], "") == 0)
			k++;
	}

	cout << "���������� �������� ����� = " << 5 - k << endl;
}