#include <iostream>
#include <string.h>

using namespace std;

void main()
{
	system("chcp 1251");
	system("cls");

	int p = 0;

	const int n = 256;
	char str[n];

	cout << "������� ������: ";
	cin.get(str, n);

	for (int i = 0; i < strlen(str); i++)
	{
		if(str[i] == '�')
		{
			p = i;
			break;
		}
	}

	char strWithOutP[n];
	strncpy_s(strWithOutP, str, p < 1 ? n : p);

	cout << "������ �� ������ ""�"": " << strWithOutP << endl;
}
