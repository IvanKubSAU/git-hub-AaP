#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "rus");

	int n;
    int k;

	cin >> n;
    
	int i = 2;
	while(i <= n)
	{
		k = 0;
        for(int j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                k++;
                break;
            }
        }
        
        if(k == 0) cout << i << endl;

		i++;
	}
}
