#include <iostream>
using namespace std;

struct koordinat
{
    float absis, absis1, absis2;
    float ordinat, ordinat1, ordinat2;
    float hasil, hasil1, hasil2;
};

void getpoint(koordinat &ttk)
{
    cout << "Masukan absis : ";
    cin >> ttk.absis;
    cout << "Masukan ordinat : ";
    cin >> ttk.ordinat;
}
void rumus_absis(koordinat &ttk)
{
    cout << "Masukan nilai absis titik pertama : ";
    cin >> ttk.absis1;
    cout << "Masukan nilai absis titik kedua : ";
    cin >> ttk.absis2;
    ttk.hasil1 = (ttk.absis1 + ttk.absis2) / 2;
    cout << "Total nilai absis dari kedua titik adalah : " << ttk.hasil1;
}
void rumus_ordinat(koordinat &ttk)
{
    cout << "Masukan nilai ordinat titik pertama : ";
    cin >> ttk.ordinat1;
    cout << "Masukan nilai ordinat titik kedua : ";
    cin >> ttk.ordinat2;
    ttk.hasil2 = (ttk.ordinat1 + ttk.ordinat2) / 2;
    cout << "Total nilai ordinat dari kedua titik adalah : " << ttk.hasil2;
}
void print_t(koordinat &ttk)
{
    cout << "(" << ttk.hasil1 << "," << ttk.hasil2 << ")" << endl;
}
void print_c(koordinat ttk)
{
    cout << "(-" << ttk.absis << "," << ttk.ordinat << ")" << endl;
}
void print_d(koordinat ttk)
{
    cout << "(" << ttk.absis << ",-" << ttk.ordinat << ")" << endl;
}
void print_x(koordinat ttk)
{
    cout << "(" << ttk.ordinat << "," << ttk.absis << ")" << endl;
}

void printpoint(koordinat ttk)
{
    cout << "(" << ttk.absis << "," << ttk.ordinat << ")" << endl;
}

main()
{
    koordinat a, b, x;
    cout << "Input titik pertama" << endl;
    getpoint(a);
    cout << endl;
    cout << "Input titik kedua" << endl;
    getpoint(b);
    cout << endl;
    cout << "Titik pertama : ";
    printpoint(a);
    cout << "Titik kedua : ";
    printpoint(b);
    cout << endl;
    cout << "Masukan penjumlahan absis\n";
    rumus_absis(x);
    cout << endl;
    cout << "Masukan penjumlahan ordinat\n";
    rumus_ordinat(x);
    cout << endl;
    cout << "Titik tengah adalah : ";
    print_t(x);
    cout << "Pencerminan terhadap sumbu x adalah : ";
    print_c(a);
    cout << "Pencerminan terhadap sumbu y adalah : ";
    print_d(a);
    cout << "Pencerminan terhadap titik (0,0) adalah    : ";
    print_x(a);
}