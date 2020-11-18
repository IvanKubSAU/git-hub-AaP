#include<iostream>

using namespace std;

void main()
{
	int a, b, c, d, x, y;

	cout << "!0 = " << !0 << endl;								//5.1
	cout << "!1 = " << !1 << endl;
	cout << "!5 = " << !5 << endl;
	cout << "!1234 = " << !1234 << endl;
	cout << "!(!0) = " << !(!0) << endl;
	cout << "(a = !0) = " << (a = !0) << endl;
	cout << "(b = !a) = " << (b = !a) << endl;
	cout << "(b = !b + !0) = " << (b = !b + !0) << endl << endl;

	cout << "(1 == 0) = " << (1 == 0) << endl;					//5.2
	cout << "(1 == 6) = " << (1 == 6) << endl;
	cout << "(5 == 5) = " << (5 == 5) << endl;
	cout << "(a = 3 != 9) = " << (a = 3 != 9) << endl;
	cout << "(b = 7 != 7) = " << (b = 7 != 7) << endl;
	cout << "(c = a == b) = " << (c = a == b) << endl;
	cout << "(d = a != b) = " << (d = a != b) << endl;
	cout << "(12 == 17 != 6) = " << (12 == 17 != 6) << endl;
	cout << "(9 == 9 != 9) = " << (9 == 9 != 9) << endl << endl;

	cout << "(1 && 1) = " << (1 && 1) << endl;					//5.3
	cout << "(1 && 0) = " << (1 && 0) << endl;
	cout << "(12 && 4) = " << (12 && 4) << endl;
	cout << "(23234 && 1) = " << (23234 && 1) << endl;
	cout << "(a = 1 || 45) = " << (a = 1 || 45) << endl;
	cout << "(b = 0 || 0) = " << (b = 0 || 0) << endl;
	cout << "(c = 43 && 6) = " << (c = 43 && 6) << endl;
	cout << "(d = a || b && c) = " << (d = a || b && c) << endl;
	cout << "(x = 6 && 9 + 0 && 45 + 412 || 98) = " << (x = 6 && 9 + 0 && 45 + 412 || 98) << endl;

}
