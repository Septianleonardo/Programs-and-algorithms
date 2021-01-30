#include <iostream>
#include <fstream>
using namespace std;

int cariO(char nFile[])
{
    char karakter;
    int jumlahO = 0;
    ifstream fileteks;
    fileteks.open(nFile);
    while (!fileteks.eof())
    {
        fileteks.get(karakter);
        if (karakter == 'O' || karakter == 'o')
            ;
        jumlahO = jumlahO + 1;
    }
    fileteks.close();
    return jumlahO;
}
int cariA(char nFile[])
{
    char karakter;
    int jumlahO = 0;
    ifstream fileteks;
    fileteks.open(nFile);
    while (!fileteks.eof())
    {
        fileteks.get(karakter);
        if (karakter == 'A' || karakter == 'a')
            ;
        jumlahO = jumlahO + 1;
    }
    fileteks.close();
    return jumlahO;
}
int cariI(char nFile[])
{
    char karakter;
    int jumlahO = 0;
    ifstream fileteks;
    fileteks.open(nFile);
    while (!fileteks.eof())
    {
        fileteks.get(karakter);
        if (karakter == 'I' || karakter == 'i')
            ;
        jumlahO = jumlahO + 1;
    }
    fileteks.close();
    return jumlahO;
}
int cariU(char nFile[])
{
    char karakter;
    int jumlahO = 0;
    ifstream fileteks;
    fileteks.open(nFile);
    while (!fileteks.eof())
    {
        fileteks.get(karakter);
        if (karakter == 'U' || karakter == 'u')
            ;
        jumlahO = jumlahO + 1;
    }
    fileteks.close();
    return jumlahO;
}
int cariE(char nFile[])
{
    char karakter;
    int jumlahO = 0;
    ifstream fileteks;
    fileteks.open(nFile);
    while (!fileteks.eof())
    {
        fileteks.get(karakter);
        if (karakter == 'E' || karakter == 'e')
            ;
        jumlahO = jumlahO + 1;
    }
    fileteks.close();
    return jumlahO;
}
main()
{
    char op;
    char namaFile[] = "algoritma.txt";
    char isi[] = "Silahkan masukan kalimat dalam file algoritma";
    cout << "Pilih jenis huruf yang akan dicari (a/i/u/e/o)\n";
    cariO(namaFile);
    switch (op)
    {
    case 'a':
        cariA(namaFile);
        break;
    case 'i':
        cariI(namaFile);
        break;
    case 'u':
        cariU(namaFile);
        break;
    case 'e':
        cariE(namaFile);
        break;
    case 'o':
        cariO(namaFile);
        break;
    default:
        cout << "Salah! tindakan tidak dikenali";
        break;
    }
    return 0;
}