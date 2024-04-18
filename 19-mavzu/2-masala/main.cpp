#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int son = 0;

    cout<<"a son = "; cin>>a;
    cout<<"b son = "; cin>>b;

    // a > b
    while(a >= b){
        a = a - b;
        son++;
    }

    cout<<"Summa = "<< son << endl;
    return 0;
}
