#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "rus");

	int n;
    int k;

	cin >> n;
	cout << endl;
    
    for(int i = 2; i <= n; i++)
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
    }

}
