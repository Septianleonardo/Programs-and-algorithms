#include <iostream>
#include <cstring>

using namespace std;

struct data
{
    string nama, nip;
    int gol;
};

main()
{
    struct data info[3];
    float rata, jumlah;
    string temp;
    int n, x, y;

    cout << "Masukan jumlah pegawai : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Data pegawai ke-" << i + 1 << endl;
        cout << "Masukan NIP    : ";
        cin >> info[i].nip;
        cout << "Masukan nama   : ";
        cin >> info[i].nama;
        cout << "Masukan golongan   : ";
        cin >> info[i].gol;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Data pegawai ke-" << i + 1 << endl;
        cout << "NIP    : " << info[i].nip << endl;
        cout << "Nama   : " << info[i].nama << endl;
        if (info[i].gol == 1)
        {
            info[i].gol = 2;
            cout << "Besaran gaji adalah Rp. 2.000.000,00-" << endl;
        }
        else if (info[i].gol == 2)
        {
            info[i].gol = 3;
            cout << "Besaran gaji adalah Rp. 3.000.000,00-" << endl;
        }
        else if (info[i].gol == 3)
        {
            info[i].gol = 5;
            cout << "Besaran gaji adalah Rp. 5.000.000,00-" << endl;
        }
        else if (info[i].gol == 4)
        {
            info[i].gol = 8;
            cout << "Besaran gaji adalah Rp. 8.000.000,00-" << endl;
        }
        else
        {
            cout << "Format golongan gaji salah!" << endl;
        }
        jumlah += info[i].gol;
    }
    rata = jumlah / n;
    cout << "Rata-rata gaji adalah Rp." << rata << " juta" << endl;
    x = info[0].gol;
    for (int i = 0; i < n; i++)
    {
        if (x < info[i].gol)
            x = info[i].gol;
    }
    cout << "Besaran gaji terbesar adalah Rp." << x << " juta" << endl;
    y = info[0].gol;
    for (int i = 0; i < n; i++)
    {
        if (y > info[i].gol)
            y = info[i].gol;
    }
    cout << "Besaran gaji terkecil adalah Rp." << y << " juta" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (info[j].nip < info[i].nip)
            {
                temp = info[i].nip;
                info[i].nip = info[j].nip;
                info[j].nip = temp;
            }
        }
    }
    cout << "Pengurutan NIP berdasarkan ascending adalah " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << info[i].nip << endl;
    }
    return 0;
}