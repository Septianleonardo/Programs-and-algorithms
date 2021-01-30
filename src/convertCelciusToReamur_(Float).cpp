#include <iostream>
using namespace std;

float cel2re(int cel){
    return cel*0.8;
}

int main(){
    int celsius = 5;
    float reamur = (cel2re(celsius));
    cout << "Reamur : " << reamur;
    return 0;
}