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

    if(n1 + n3 > max)
        max = n1 + n3;

    if(n2 + n3 > max)
        max = n2 + n3;

    cout << "\n������������ �����: " << max << endl;
}
                                                                                                                                                                                                                                                                                                                                                                                                             