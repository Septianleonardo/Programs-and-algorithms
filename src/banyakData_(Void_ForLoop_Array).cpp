#include <iostream>
using namespace std;

void banyakdata(int &n);
void isilarik(int a[], int n);
void printlarik(int a[], int n);

main()
{
    int x[10];
    int n;
    banyakdata(n);
    isilarik(x, n);
    printlarik(x, n);
}

void banyakdata(int &n)
{
    cout << "Banyak data  : ";
    cin >> n;
}
void isilarik(int a[], int n)
{
    cout << endl;
    cout << "Masukan Data     " << endl;
    cout << "******************************" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Masukan data ke-" << i + 1 << " = ";
        cin >> a[i];
    }
    cout << endl;
}
void printlarik(int a[], int n)
{
    cout << "Data yang sudah dimasukan     " << endl;
    cout << "******************************" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << " = " << a[i] << endl;
    }
}