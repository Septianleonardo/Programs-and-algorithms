#include <iostream>
using namespace std;

void sigma()
{
    int angka, bilangan = 0;
    for (int i = 1; i <= angka; i++)
    {
        bilangan += i;
        cout << i << "+";
    }
}

void segitiga()
{
    int kolom, b, c, d;

    for (b = 1; b <= kolom; b++)
    {

        for (d = b; d < kolom; d++)
        {
            cout << " ";
        }

        for (c = 1; c <= (2 * b - 1); c++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}

void segitiga_terbalik()
{
    int kolom1, b1, c1, d1;

    for (b1 = kolom1; b1 >= 1; b1--)
    {

        for (d1 = b1; d1 < kolom1; d1++)
            cout << " ";

        for (c1 = 1; c1 <= (2 * b1 - 1); c1++)
            cout << "*";

        cout << "\n";
    }
}

void pola_x()
{
    int kolom2;
    for (int i = 1; i <= kolom2; i++)
    {
        for (int j = 1; j <= kolom2; j++)
        {
            if (i == j || j == (kolom2 + 1) - i)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}

main()
{
    char operasi = 'A';
    int B, C, D;
    cout << "Masukan jenis Operasi  : \n";
    cout << "Sigma tekan A\n";
    cout << "Segitiga tekan B\n";
    cout << "Segitiga terbalik tekan C\n";
    cout << "Pola X tekan D\n";
    cin >> operasi;

    sigma();
    segitiga();
    segitiga_terbalik();
    pola_x();

    switch (operasi)
    {
    case 'A':
        int angka;
        cout << "Masukan angka : ";
        cin >> angka;
        cout << angka << " (" << sigma << ")";
        break;
    case 'B':
        int kolom, b, c, d;
        cout << "Masukan jumlah Kolom   : ";
        cin >> kolom;
        cout << segitiga;
        break;
    case 'C':
        int kolom1, b1, c1, d1;
        cout << "Masukan jumlah Kolom   : ";
        cin >> kolom1;
        cout << segitiga_terbalik;
        break;
    case 'D':
        int kolom2;
        cout << "Masukan jumlah kolom    : ";
        cin >> kolom2;
        cout << pola_x;
        break;
    default:
        cout << "Salah! tindakan tidak dikenali";
        break;
    }
    return 0;
}