#include <iostream>
using namespace std;

void swap()
{
    int temp, x, y;
    temp = x;
    x = y;
    y = x;
}

int main()
{
    int x = 7;
    int y = 12;
    cout << "x is "<< x << endl;
    cout << "y is "<< y << endl;
    swap(x,y);
    cout << "after swap"<< endl;
    cout << "x is "<< x << endl;
    cout << "y is "<< y << endl;
    return 0;
}