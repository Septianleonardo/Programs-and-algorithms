#include <iostream>
using namespace std;
typedef int larik[20];

void input(int &n);
void swap(int &x, int &y);
void proses(larik &a, int n);
void bubbleSort(larik &a, int n);
void linearSearch(larik a, int n, int kunci, int &found, int &lokasi);
void output(larik &a, int &n);

main()
{
    int n, kunci, found, lokasi;
    larik a;
    input(n);
    proses(a, n);
    bubbleSort(a, n);
    output(a, n);
    cout << "Masukan kata kunci : ";
    cin >> kunci;
    linearSearch(a, n, kunci, lokasi, found);
    if (found)
    {
        cout << "Ditemukan di posisi: " << lokasi + 1;
    }
    else
    {
        cout << "Tidak ditemukan";
    }
}

void input(int &n)
{
    cout << "Masukan banyak data : ";
    cin >> n;
}
void proses(larik &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-[" << i + 1 << "] : ";
        cin >> a[i];
    }
}

void bubbleSort(larik &a, int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void linearSearch(larik a, int n, int kunci, int &found, int &lokasi)
{
    found = lokasi = 0;
    while (!found && lokasi < n)
    {
        if (a[n] == kunci)
        {
            found = 1;
        }
        else
        {
            lokasi = lokasi + 1;
        }
    }
}

void output(larik &a, int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}