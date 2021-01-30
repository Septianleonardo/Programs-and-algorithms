/*
Nama Program    : sorting dengan metode bubble
Nama            : Leonardo Septian Dwigantoro
NPM             : 140810190038
Tanggal         : 28 oktober 2019
Program         : membuat program sorting dengan metode bubble
*/

#include <iostream>
using namespace std;

main()
{
    int x, y, z, angka, arr[10];
    cout << "Masukan angka  : ";
    cin >> angka;
    for (int i = 0; i < angka; i++)
    {
        cout << "Masukkan nilai " << i + 1 << " : ";
        cin >> arr[i];
    }
    for (int i = 0; i < angka - 1; i++)
    {

        for (int a, x = a + 1; x < angka; x++)
        {
            int y = a;
            if (arr[x] < arr[y])
            {
                x = y;
            }
            z = arr[y];
            arr[y] = arr[a];
            arr[a] = z;
        }
    }
    cout << "Hasil pengurutan : \n";
    for (int a = 0; a < angka; a++)
    {
        cout << arr[a] << " \n";
    }
}