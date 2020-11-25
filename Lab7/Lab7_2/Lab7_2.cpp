#include <iostream> 
#include<math.h>

using namespace std;

const double da = 0.5, dx = 0.2;
double a, x, y, z;

void main()
{
	a = 1;

	while (a <= 3)
	{
		x = 0;
		while (x <= 2)
		{
			y = sin(x) + cos(a);

			if (y < 0) z = y + x;
			else if (y >= 0 && y <= 1) z = pow(cos(x), 2);
			else z = pow(x + y * x, 3);

			printf("a = %lf; x = %lf; y = %lf; z = %lf;\n", a, x, y, z);

			x += dx;
		}

		a += da;
	}
	system("pause");

}