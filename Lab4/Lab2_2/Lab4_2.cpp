#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "rus");

	int days, mounth;
	bool a;
	
	cout << "��� ����������?\n\n0. ��\n1. ���\n\n��� �����: ";
	cin >> a;
	if(!(a == 0 || a == 1))
	{
		cout << "������ ����� ������!" << endl;
		return;
	}
	
	a = ~a;

	cout << "\n\n\n������� ����� ������: ";
	cin >> mounth;
	if(!(mounth > 0 && mounth < 13))
	{
		cout << "������ ����� ������!" << endl;
		return;
	}

	switch (mounth)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		days = 31;
		break;
	case 2: case 4: case 6: case 9: case 11:
		if(mounth == 2)
		{
			days = a == 0 ? 29 : 28;
		}
		else
			days = 30;
		break;
	}

	cout << "\n\n����� ���� � ������: " << days << endl;
}
