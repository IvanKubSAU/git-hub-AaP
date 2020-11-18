#include <iostream>

using namespace std;

void main()
{
    setlocale(0, "rus");

    int n1, n2, n3, max;

    cout << "Первое число: ";
    cin >> n1;

    cout << "Второе число: ";
    cin >> n2;

    cout << "Третье число: ";
    cin >> n3;


    max = n1 + n2;

	max = ((n1 + n3) > (n1 + n2)) ? n1 + n3 : n1 + n3;
	max = (n2 + n3) > max ? n2 + n3 : max;

    cout << "\nМаксимальная сумма: " << max << endl;
}
