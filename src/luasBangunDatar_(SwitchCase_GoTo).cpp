#include <iostream>
#include <stdlib.h>
using namespace std;

main()
{
    halaman_depan:
    char pilihan;
    float ukuran;
    cout << "Masukan ukuran bangun datar    : ";
    cin >> ukuran;
    cout << "pilih jenis bangun datar " << endl;
    cout << "1. persegi isi " << endl;
    cout << "2. persegi kosong " << endl;
    cout << "3. segitiga atas-bawah " << endl;
    cout << "4. segitiga kanan-kiri " << endl;
    cout << "5. belah ketupat isi " << endl;
    cout << "6. belah ketupat kosong " << endl;
    cout << "7. input kembali " << endl;
    cout << "8. keluar program " << endl;
    cin >> pilihan;
    switch (pilihan)
    {
    case '1':
        for (int i = 1; i <= ukuran; i++)
        {
            for (int j = 1; j <= ukuran; j++)
            {
                cout << "*";
            }
            cout << endl;
            break;
        }
    case '2':
        for (int x = 1; x <= ukuran; x++)
        {
            for (int y = 1; y <= ukuran; y++)
            {
                if (x == 1 || x == ukuran || y == 1 || y == ukuran)
                    cout << "* ";
                else
                {
                    cout << "  ";
                }
                cout << endl;
            }
            break;
        }
    case '3':
        for (int b = 1; b <= ukuran; b++)
        {

            for (int d = b; d < ukuran; d++)
            {
                cout << " ";
            }

            for (int c = 1; c <= (2 * b - 1); c++)
            {
                cout << "*";
            }

            cout << "\n";
        }
        for (int b1 = ukuran; b1 >= 1; b1--)
        {

            for (int d1 = b1; d1 < ukuran; d1++)
                cout << " ";

            for (int c1 = 1; c1 <= (2 * b1 - 1); c1++)
                cout << "*";

            cout << "\n";
        }
        break;
    case '4':

        for (int i3 = 1; i3 <= ukuran; i3++)
        {
            for (int j3 = i3; j3 < ukuran; j3++)
            {
                cout << " ";
            }
            for (int j4 = 1; j4 <= i3; j4++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        for (int i4 = ukuran; i4 >= 1; i4--)
        {
            for (int j5 = i4; j5 <= ukuran; j5++)
            {
                cout << " ";
            }
            for (int j6 = 1; j6 < i4; j6++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        break;
    case '5':
        for (int i5 = ukuran; i5 >= 0; i5--)
        {
            for (int j7 = i5; j7 >= 0; j7--)
                cout << " ";
            for (int k = 0; k <= ukuran - i5; k++)
                cout << "*";
            for (int k2 = 0; k2 < ukuran - i5; k2++)
                cout << "*";
            cout << endl;
        }
        for (int a = 0; a <= ukuran; a++)
        {
            for (int b = 0; b <= a; b++)
                cout << " ";
            for (int c = 0; c >= (a - ukuran); c--)
                cout << "*";
            for (int z = 0; z < (ukuran - a); z++)
                cout << "*";
            cout << endl;
        }
        break;
    case '6':
        for (int i = 1; i <= ukuran; i++)
        {
            for (int j = i; j <= ukuran; j++)
            {
                cout << "*";
            }
            for (int j = 1; j <= (2 * i - 2); j++)
            {
                cout << " ";
            }
            for (int j = i; j <= ukuran; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        for (int i = 1; i <= ukuran; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            for (int j = (2 * i - 2); j < (2 * ukuran - 2); j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        break;
    case '7':
        goto halaman_depan;
        break;
    case '8':
        exit(0);
        break;
    default:
        cout << "Salah! tindakan tidak dikenali";
        break;
    }
    return 0;
}