s#include <iostream>
using namespace std;

main()
{
    int a, b, c, min;
    cout << "Masukan 3 bilangan   : ";
    cin >> a >> b >> c;
    if (a < b)
        if (a < c)
            min = a;
        else
            min = c;
    else if (b < c)
        min = b;
    else
        min = c;
    cout << "Minimum adalah : " << min << endl;
}
