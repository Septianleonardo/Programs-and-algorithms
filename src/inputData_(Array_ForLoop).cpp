C#include <iostream>
using namespace std;

int main()
{
    int data[20], n;
    cout << "Input jumlah data  : ";
    cin >> n;
    cout << "Input data : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << " = " << data[i] << endl;
    }
    return 0;
}