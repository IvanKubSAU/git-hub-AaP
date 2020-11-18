//1000 0010
#include <iostream>
#include <bitset>

using namespace std;

void main()
{
	int num = 130;
	
	cout << "-----------------" << endl;
	cout << "|130 = 1000 0010|" << endl;
	cout << "| &        &    |" << endl;
	cout << "|239 = 1110 1111|" << endl;
	cout << "| =        =    |" << endl;
	cout << "|130 = 1000 0010|" << endl;
	cout << "-----------------" << endl << endl;

	num &= 239;

	cout << "-----------------" << endl;
	cout << "|130 = 1000 0010|" << endl;
	cout << "| &        &    |" << endl;
	cout << "|127 = 0111 1111|" << endl;
	cout << "| =        =    |" << endl;
	cout << "| 2  = 0000 0010|" << endl;
	cout << "-----------------" << endl << endl;
	
	num &= 127;

	bitset<8> bit = 130;
	
	bit[4] = 0;
	bit[7] = 0;

	cout << "   i - 7654 3210" << endl;
	cout << " num - 1000 0010" << endl;
	cout << "*num - 0000 0010" << endl;

}
