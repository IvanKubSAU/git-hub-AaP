#include <iostream>

using namespace std;

struct Date
{
	int day;
	int mounth;
	int year;

	Date(){}
	Date(int day, int mounth, int year)
	{
		Date::day = day;
		Date::mounth = mounth;
		Date::year = year;
	}
};

struct Product
{
	int id;
	char name[256];
	double weight;
	double price;
	Date date;

	Product()
	{

	}

};


void main()
{
	setlocale(0, "rus");

	const int count = 5;
	char name[count][256] = {"Сыр", "Колбаса", "Творог", "Молоко", "Хлеб"};
	double weigth[count] = {0.35, 0.5, 1, 1, 0.250};
	double price[count] = {300, 250, 100, 45, 30};
	Date date = Date(15, 6, 2020);

	Product products[count];

	for (int i = 0; i < count; i++)
	{
		products[i].id = i;
		strcpy_s(products[i].name, name[i]);
		products[i].weight = weigth[i];
		products[i].price = price[i];
		products[i].date = date;

		cout << "ID: " << products[i].id << "\nName: " << products[i].name << "\nWeigth: " << products[i].weight << "\nPrice: " << products[i].price << "\nDate: " << products[i].date.day << "." << products[i].date.mounth << "." << products[i].date.year << endl << endl;
	}

	int mo, da;
	cout << "Введите номер месяца: ";
	cin >> mo;

	cout << "Введите число месяца: ";
	cin >> da;

	cout << endl;
	for each (Product pr in products)
	{
		if(pr.date.mounth == mo && pr.date.day == da)
		{
			cout << "ID: " << pr.id << "\nName: " << pr.name << "\nWeigth: " << pr.weight << "\nPrice: " << pr.price << "\nDate: " << pr.date.day << "." << pr.date.mounth << "." << pr.date.year << endl << endl;
		}

	}
}
