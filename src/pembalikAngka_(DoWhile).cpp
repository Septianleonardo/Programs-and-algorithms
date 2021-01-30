#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int a, b = 0;
    cout << "Masukan angka             : ";
    cin >> a;
    do
    {
        b = (b * 10) + (a % 10);
        a = a / 10;
    } while (a > 0);

    cout << "Kebalikan angka adalah    : " << b;
}