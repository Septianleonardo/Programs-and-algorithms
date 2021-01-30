#include <iostream>
using namespace std;

main()
{
    int n, prima = 0;
    cout << "Batasan bilangan prima    : ";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        prima = 0;
        for (int b = 2; b < i; b++)
        {
            if (i % b == 0)
            {
                prima = 1;
            }
        }
        if (prima == 0)
        {
            cout << i << " ";
        }
    }
}