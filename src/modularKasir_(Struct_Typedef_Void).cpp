#include <iostream>
#include <string>
using namespace std;

struct tipeAtribut
{   
    int kodeBarang;
    char namaBarang[100];
    int harga;
    int jumlah;
};

typedef tipeAtribut jenisBarang[100];

void jumlahData(int& jumlahBarang) // Mengambil jumlah jenis-jenis barang
{
    cout << "Masukan jumlah barang  :   ";
    cin >> jumlahBarang;                                        
    cout << endl;

}

void insertBarang(jenisBarang& tipeBarang, int& jumlahBarang) //Memasukan detail dari setiap jenis barang
{  
    cout << endl;
    cout << "###########################"<< endl;
    for(int i = 0 ; i <jumlahBarang; i++)
    {
        cout << "Masukan Data barang ke-"<< i + 1 << endl;
        cout << "Kode barang    : ";
        cin >> tipeBarang[i].kodeBarang;
        cout << "Nama           : ";
        cin >> tipeBarang[i].namaBarang;                      
        cout << "Harga          : ";
        cin >> tipeBarang[i].harga;
        cout << "Jumlah         : ";
        cin >> tipeBarang[i].jumlah;
        cout << endl;
    }
}

void cetakBarang(jenisBarang& tipeBarang, int& jumlahBarang) //Mencetak hasil barang yang telah diinput
{
    cout << endl;
    cout << "###########################"<< endl;
    for(int i = 0 ; i <jumlahBarang; i++)
    {
        cout << "Pencetakan Info Data barang ke-"<< i + 1 << endl;
        cout << "Kode barang    : " << tipeBarang[i].kodeBarang << endl;
        cout << "Nama           : " << tipeBarang[i].namaBarang << endl;  
        cout << "Harga          : " << tipeBarang[i].harga << endl;
        cout << "Jumlah         : " << tipeBarang[i].jumlah << endl;
        cout << endl;
    }
}

void jumlahSemuaBarang(int& jumlahBarang) // Mencetak jumlah jenis-jenis barang
{
    cout << "Jumlah data barang yang dimasukan adalah " << jumlahBarang << endl;
}

void barangTerbanyak(jenisBarang& tipeBarang, int& jumlahBarang) // Mensorting untuk mendapatkan barang dengan jumlah terbanyak   
{  int max;
    max = tipeBarang[0].jumlah;
    for(int i = 0 ; i < jumlahBarang ; i++)
    {
        if(max < tipeBarang[i].jumlah) // membandingkan variabel dengan jumlah tiap barang sampai terdapat jumlah barang terbesar
        {
            max = tipeBarang[i].jumlah;
        }
    }
    cout << "Jumlah barang terbanyak adalah " << max << endl;
}
void barangTersedikit(jenisBarang& tipeBarang, int& jumlahBarang) // Mensorting untuk mendapatkan barang dengan jumlah tersedikit
{   int min;
    min = tipeBarang[0].jumlah;
    for(int i = 0 ; i < jumlahBarang ; i++)
    {
        if(min > tipeBarang[i].jumlah) // membandingkan variabel dengan jumlah tiap barang sampai terdapat jumlah barang terkecil
        {
            min = tipeBarang[i].jumlah;
        }
    }
    cout << "Jumlah barang tersedikit adalah " << min << endl;

}
void hargaTotalBarang(jenisBarang& tipeBarang, int& jumlahBarang) // Mentotal harga barang dengan mengkali jumlah dengan harga
{
    int total;
    for (int i = 0; i < jumlahBarang; i++)
    {
        total = tipeBarang[i].harga * tipeBarang[i].jumlah;
    }
    cout << "Harga total barang adalah Rp." << total << ",00-" << endl;
}

main()
{
    jenisBarang tipeBarang;
    int jumlahBarang;
    jumlahData(jumlahBarang);
    jumlahSemuaBarang(jumlahBarang);
    insertBarang(tipeBarang, jumlahBarang);
    cetakBarang(tipeBarang, jumlahBarang);
    barangTerbanyak(tipeBarang, jumlahBarang);
    barangTersedikit(tipeBarang, jumlahBarang);
    hargaTotalBarang(tipeBarang, jumlahBarang);
    return 0;
}