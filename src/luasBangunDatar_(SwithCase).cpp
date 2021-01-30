#include <iostream>
using namespace std;

 main ()
{
    char Bangun = 'A';
    float A, B, C, D;
    cout<<"Masukan jenis bangun datar yang akan dicari luasnya: \n\n";
    cout<<"Segitiga tekan A\n";
    cout<<"Persegi panjang tekan B\n";
    cout<<"Lingkaran tekan C\n";
    cout<<"Persegi tekan D\n";
    cin>>Bangun;
    switch(Bangun)
    {
        case 'A':
            float luasA, alas, tinggi;
            cout<<"Masukan panjang alas = ";
            cin>>alas;
            cout<<"Masukan tinggi segitiga = ";
            cin>>tinggi;
            luasA=(alas*tinggi)*0.5;
            cout<<"Luas = "<<luasA;
            break;
        case 'B':
            float panjang, lebar, luasB;
            cout<<"Masukan panjang = ";
            cin>>panjang;
            cout<<"Masukan lebar = ";
            cin>>lebar;
            luasB=panjang*lebar;
            cout<<"Luas =  "<<luasB;
            break;
        case 'C':
            float jari, luasC;
            cout<<"Masukan panjang jari-jari = ";
            cin>>jari;
            luasC=3.14*(jari*jari);
            cout<<"Luas = "<<luasC;
            break;
        case 'D':
            float sisi,luasD;
            cout<<"Masukan panjang sisi = ";
            cin>>sisi;
            luasD=sisi*sisi;
            cout<<"Luas = "<<luasD;
            break;
        default:
            cout << "Salah! tindakan tidak dikenali";
            break;
    }
    return 0;
}