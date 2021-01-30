/*
Nama Program    : Pencari suhu
Nama            : Leonardo Septian Dwigantoro
NPM             : 140810190038
Tanggal         : 18 September 2019
Program         : Program pencari suhu
*/

#include <iostream>
using namespace std;

main()
{
    int c, r1, r2, r3;
    cout << "Masukan suhu (dalam C)   : \n";
    cin >> c;
    r1 = 4 * c / 5;
    r2 = (9 * c / 5) + 32;
    r3 = c + 273.15;
    cout << "Suhu dalam Reamur      : " << r1 << endl;
    cout << "Suhu dalam Fahrenheit  : " << r2 << endl;
    cout << "Suhu dalam Kelvin      : " << r3 << endl;
}
