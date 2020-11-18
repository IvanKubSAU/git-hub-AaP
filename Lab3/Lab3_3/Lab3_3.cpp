#include<iostream>

using namespace std;

void main()
{
	int a, b, c, d, x, y;

	cout << "(~15) = " << (~15) << endl;					//6.1
	cout << "(~-1) = " << (~-1) << endl;
	cout << "(a = ~1000000) = " << (a = ~1000000) << endl;
	cout << "(b = ~a) = " << (b = ~a) << endl << endl;

	cout << "(a = 14 & 10) = " << (a = 14 & 10) << endl;	//6.2
	cout << "(b = 5 | 2) = " << (b = 5 | 2) << endl;
	cout << "(c = 170 ^ 15) = " << (c = 170 ^ 15) << endl;
	cout << "(d ^= a & b) = " << (d ^= a & b) << endl;
	cout << "(x &= 100) = " << (x &= 100) << endl;
	cout << "(x |= c) = " << (x |= c) << endl << endl;

	cout << "(1 << 1) = " << (1 << 1) << endl;				//6.3
	cout << "(3 << 2) = " << (3 << 2) << endl;
	cout << "(a = 128 >> 4) = " << (a = 128 >> 4) << endl;
	cout << "(a <<= 2) = " << (a <<= 2) << endl;
	cout << "(b = a >> 3) = " << (b = a >> 3) << endl;
}