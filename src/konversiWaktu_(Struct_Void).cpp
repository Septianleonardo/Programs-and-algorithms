/*
Nama Program    : Konversi Waktu
Nama            : Leonardo Septian Dwigantoro
NPM             : 140810190038
Tanggal         : 2 November 2019
Program         : Program koversi waktu dengan input detik output berupa jam, menit, dan detik
*/

#include <iostream>
using namespace std;

struct waktu
{
    int detik_input, detik_output, menit, jam;
};

void inputData(waktu &data)
{
    cout << "Masukan detik : ";
    cin >> data.detik_input;
}
void outputData(waktu &data)
{
    data.detik_output = data.detik_input % 60;
    data.menit = (data.detik_input % 3600) / 60;
    data.jam = data.detik_input / 3600;
    cout << data.jam << ":" << data.menit << ":" << data.detik_output << endl;
}
main()
{
    waktu input;
    cout << "Selamat datang di program konversi waktu";
    cout << endl;
    inputData(input);
    cout << "Hasil konversi waktu ";
    outputData(input);
    return 0;
}