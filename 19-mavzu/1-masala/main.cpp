#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout<<"a son = "; cin>>a;
    cout<<"b son = "; cin>>b;

    // a > b
    while(a >= b){
        a = a - b;
    }
    cout<<"Summa = "<< a <<endl;
    return 0;
}
