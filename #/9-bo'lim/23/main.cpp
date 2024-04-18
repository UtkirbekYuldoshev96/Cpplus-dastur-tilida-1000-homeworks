#include <iostream>

using namespace std;

int main()
{
    int a,b,c, k;
    bool x;
    cout<<"k = "; cin>>k;

    a = k/100;
    b = (k%100)/10;
    c = k%10;
    x = a == c;
    cout<<"Rostlikni tekshiring = "<< x<<endl;
    return 0;
}
