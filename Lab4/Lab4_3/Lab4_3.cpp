#include <iostream>

using namespace std;

void main()
{
    setlocale(0, "rus");

    int n1, n2, n3, max;

    cout << "������ �����: ";
    cin >> n1;

    cout << "������ �����: ";
    cin >> n2;

    cout << "������ �����: ";
    cin >> n3;


    max = n1 + n2;

	max = ((n1 + n3) > (n1 + n2)) ? n1 + n3 : n1 + n3;
	max = (n2 + n3) > max ? n2 + n3 : max;

    cout << "\n������������ �����: " << max << endl;
}
