#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "rus");

	int days, mounth;
	bool a;
	
	cout << "Год високосный?\n\n0. Да\n1. Нет\n\nВаш выбор: ";
	cin >> a;
	if(!(a == 0 || a == 1))
	{
		cout << "Ошибка ввода данных!" << endl;
		return;
	}
	
	a = ~a;

	cout << "\n\n\nВведите номер месяца: ";
	cin >> mounth;
	if(!(mounth > 0 && mounth < 13))
	{
		cout << "Ошибка ввода данных!" << endl;
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

	cout << "\n\nЧисло дней в месяце: " << days << endl;
}
