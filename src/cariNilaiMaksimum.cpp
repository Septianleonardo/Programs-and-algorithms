#include <iostream>
using namespace std;

main()
{
    int a, b, c, max;
    cout << "Masukan 3 bilangan   : ";
    cin >> a >> b >> c;
    if (a > b)
        if (a > c)
            max = a;
        else
            max = c;
    else if (b > c)
        max = b;
    else
        max = c;
    cout << "Maximum adalah : " << max << endl;
}
