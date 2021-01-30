#include <iostream>
#include <fstream>
using namespace std;

void isiFilePerkarakter(char nFile[])
{
    ofstream fileteks;
    fileteks.open(nFile);
    fileteks.put('A');
    fileteks.put('B');
    fileteks.put('C');
    fileteks.close();
}
void cetakFilePerkarakter(char nFile[])
{
    char karakter;
    ifstream fileteks;
    fileteks.open(nFile);
    while (!fileteks.eof())
    {
        fileteks.get(karakter);
        cout << karakter;
    }
    fileteks.close();
}

int cariJumlahHuruf(char nFile[])
{
    char karakter;
    int jumlahA = 0;
    ifstream fileteks;
    fileteks.open(nFile);
    while (!fileteks.eof())
    {
        fileteks.get(karakter);
        if (karakter == 'A' || karakter == 'a')
            jumlahA = jumlahA + 1;
    }
    fileteks.close();
    return jumlahA;
}
int main()
{
    char namaFile[] = "algoritma.txt";
    cout << "Masukan isi file  dalam text algoritma ";
    isiFilePerkarakter(namaFile);
    cetakFilePerkarakter(namaFile);
    cout << "\nMasukan karakter yang ingin dicari  : ";
    cariJumlahHurufA(namaFile);
}