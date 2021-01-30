#include <iostream>
using namespace std;
typedef int matriks[20][20];

void banyakData(int &nBaris, int &nKolom);
void isiMatriks(matriks &x, int nBaris, int nKolom);
void cetakMatriks(matriks x, int nBaris, int nKolom);

main()
{
    int nBaris, nKolom;
    matriks x;
    banyakData(nBaris, nKolom);
    isiMatriks(x, nBaris, nKolom);
    cetakMatriks(x, nBaris, nKolom);
}

void banyakData(int &nBaris, int &nKolom)
{
    cout << "Banyak baris  : ";
    cin >> nBaris;
    cout << "Banyak kolom  : ";
    cin >> nKolom;
}

void isiMatriks(matriks &x, int nBaris, int nKolom)
{
    cout << endl;
    for (int i = 0; i < nBaris; i++)
    {
        for (int j = 0; j < nKolom; j++)
        {
            cout << "Data ke-[" << i + 1 << "," << j + 1 << "] : ";
            cin >> x[i][j];
        }
    }
}

void cetakMatriks(matriks x, int nBaris, int nKolom)
{
    cout << "\nPencetakan Matriks : " << endl;
    for (int i = 0; i < nBaris; i++)
    {
        for (int j = 0; j < nKolom; j++)
        {
            cout << x[i][j];
        }
        cout << endl;
    }
}