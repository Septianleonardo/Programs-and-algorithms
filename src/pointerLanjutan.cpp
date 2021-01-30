/*
Nama Program     : 
Nama             : Leonardo Septian Dwigantoro
NPM              : 140810190038
Tanggal  buat    : 
Deskripsi        : 
******************************************************/
#include <iostream>
using namespace std;

main()
{
    int n = 1;
    int *p = &n;
    int *q;
    int *r;
    int *s;
    cout << "n = " << n << " &n = " << &n << endl;
    cout << "p = " << p << " *p = " << *p << endl;
    cout << "&p = " << &p << " &(*p) = " << &(*p) << endl;
    q = new int;
    *q = 2;
    cout << "q = " << q << " *q = " << *q << endl;
    cout << "&q = " << &q << " &(*q) = " << &(*q) << endl;

    r = new int;
    *r = 3;
    cout << "r = " << r << " *r = " << *r << endl;
    cout << "&r = " << &r << " &(*r) = " << &(*r) << endl;
    s = q;
    *s = 4;
    cout << "q = " << q << " *q = " << *q << endl;
    cout << "s = " << s << " *s = " << *s << endl;
    cout << "&q = " << &q << " &(*q) = " << &(*q) << endl;
}