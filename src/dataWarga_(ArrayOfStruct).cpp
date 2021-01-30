#include <iostream>
#include <string.h>
using namespace std;

struct warga
{
    long long int nik;
    char nama[30];
    char pekerjaan[30];
};

int main()
{
    warga wrg;

    wrg.nik = 320400884764738;
    strcpy(wrg.nama, "Agus Darmono");
    strcpy(wrg.pekerjaan, "Software Developer");

    cout << wrg.nik << endl;
    cout << wrg.nama << endl;
    cout << wrg.pekerjaan << endl;

    return 0;
}