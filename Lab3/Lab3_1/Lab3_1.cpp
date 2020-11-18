#include<iostream>

using namespace std;

void main()
{
	int a, b, c, d, x, y;									//4.1

	cout << "(y = 10) = " << (y = 10) << "\n\n";			//4.2

	a = b = y;												//4.3
	c = d = x = 15;

	cout << "y -> " << y << '\n';
	cout << "b -> " << b << '\n';
	cout << "a -> " << a << '\n';
	cout << "x -> " << x << '\n';
	cout << "d -> " << d << '\n';
	cout << "c -> " << c << "\n\n";

	cout << "(b + c) = " << b + c << "\n";					//4.4.1
	cout << "(d + c + y) = " << d + c + y << "\n";
	cout << "(d - b) = " << d - b << "\n";
	cout << "(c - 2 - y) = " << c - 2 - y << "\n";
	cout << "(b + c - y + 5 - 20) = " 
		<< b + c - y+ 5 - 20 << "\n";
	cout << "(a = b + d) = " << (a = b + d) << "\n";
	cout << "(b + (y = a - d)) = " 
		<< b + (y = a - d) << "\n";
	cout << "(y + a) = " << y + a << "\n";
	cout << "(x = y = y + (c = b - 5 + d - x + y) + c) = " 
		<< (x = y = y + (c = b - 5 + d - x + y) + c) << "\n\n";

	cout << "a -> " << a << "\n";							//4.4.2
	cout << "x -> " << x << "\n";
	cout << "y -> " << y << "\n";
	cout << "c -> " << c << "\n\n";

	cout << "(a = 10) = " << (a = 10) << "\n";				//4.5.1
	cout << "(b = 5) = " << (b = 5) << "\n";
	cout << "(a++) = " << a++ << "\n";
	cout << "(b--) = " << b-- << "\n\n";

	cout << "a -> " << a << "\n";							//4.5.2
	cout << "b -> " << b << "\n\n";

	cout << "(c = ++b) = " << (c = ++b) << "\n";			//4.5.3
	cout << "(d = --a) = " << (d = --a) << "\n\n";

	cout << "a -> " << a << "\n";							//4.5.4
	cout << "b -> " << b << "\n\n";

	cout << "(c += a) = " << (c += a) << "\n";				//4.5.5
	cout << "(b -= d) = " << (b -= d) << "\n";
	cout << "(x = ++c -= d-) = " << (x = ++c -= d--) << "\n\n";

	cout << "c -> " << c << "\n";							//4.5.6
	cout << "d -> " << d << "\n\n";

	cout << "(++y = ++(++(++a)))) = "						//4.5.7
		<< (++y = ++(++(++a))) << "\n\n";

	cout << "a -> " << a << "\n";							//4.5.8
	cout << "y -> " << y << "\n\n";

	a = 10 * 5, b = 100 / 20, c = a * b;					//4.6.1

	cout << "a -> " << a << "\n";							//4.6.2
	cout << "b -> " << b << "\n";
	cout << "c -> " << c << "\n\n";

	a /= b, d = c * b + a / b, x = a * b / c * d;			//4.6.3

	cout << "a -> " << a << "\n";							//4.6.4
	cout << "d -> " << d << "\n";
	cout << "x -> " << x << "\n\n";

	a = 100 % 30, a %= 4;									//4.6.5

	cout << "a -> " << a << "\n";							//4.6.6
}
