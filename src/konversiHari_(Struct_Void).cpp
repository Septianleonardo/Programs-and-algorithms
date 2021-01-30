#include <iostream>
using namespace std;

struct tanggal
{
    int hari_input, hari_output, bulan, tahun;
};

void inputData(tanggal &data)
{
    cout << "Masukan hari : ";
    cin >> data.hari_input;
}
void outputData(tanggal &data)
{
    data.hari_output = data.hari_input % 30;
    data.bulan = (data.hari_input % 900) / 30;
    data.tahun = data.hari_input / 900;
    cout << data.tahun << " Tahun " << data.bulan << " Bulan " << data.hari_output << " Hari " << endl;
}
main()
{
    tanggal input;
    cout << "Selamat datang di program konversi tanggal";
    cout << endl;
    inputData(input);
    cout << "Hasil konversi tanggal " << endl;
    outputData(input);
    return 0;
}