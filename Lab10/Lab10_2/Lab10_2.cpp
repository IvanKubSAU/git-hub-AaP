#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "rus");

	const int n = 28;
	char fname[n][256] = {"���", "��������", "��������", "��������", "������", "���������", "�������", "��������", "��������", "�������������", "�������", "��������", "�������", "��������", "�����������", "���������", "������", "��������", "���������", "�������", "������", "�����", "��������", "��������", "�ope�����", "��������", "�������", "��������"};

	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < n / 2 - 1 - i; j++)
		{
			if(strcmp(fname[j], fname[j + 1]) < 0)
			{
				char buf[256];
				strcpy_s(buf, fname[j]);
				strcpy_s(fname[j], fname[j + 1]);
				strcpy_s(fname[j + 1], buf);
			}
		}
	}

	for (int i = n / 2; i < n; i++)
	{
		for (int j = n / 2; j < n - 1 - i; j++)
		{
			if(strcmp(fname[j], fname[j + 1]) > 0)
			{
				char buf[256];
				strcpy_s(buf, fname[j]);
				strcpy_s(fname[j], fname[j + 1]);
				strcpy_s(fname[j + 1], buf);
			}
		}
	}

	cout << "�� ��������:" << endl;
	for (int i = 0; i < n / 2; i++)
	{
		cout << fname[i] << endl;
	}
	cout << endl;

	cout << "�� �����������:" << endl;
	for (int i = n / 2; i < n; i++)
	{
		cout << fname[i] << endl;
	}
}
