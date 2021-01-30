#include <iostream>
using namespace std;

void rumus(int &x, int &y)
{
}

main()
{
    float a, prima ;
    cout << "Masukan angka    : " << endl;
    cin >> a;
        for (int i = 2; i <= a; i++)
    {
        prima = 0;
        for (int b = 2; b < i; b++)
        {
            if (i % b == 0)
            {
                prima = 1;
            }
        }
        if (prima == 0)
        {
            cout << i << "|";
        }
    }

    if (a == 7){
        cout << "Bentuk Taurus    ||||| ||" << endl;
        }   
    else{
        cout << "Tidak ada bentuk taurus" << endl;
        }

    if ( a == 7){
        cout<<"7 adalah bilangan ganjil"<<endl;
    }
    else
    {
        cout<< "Bilangan adalah genap"<<endl;
    }
    
    if ( a == 7){
        cout<<"7 adalah bilangan prima"<<endl;
    }
    else
    {
        cout<< "7 bukan bilagan prima"<<endl;
    }
}

