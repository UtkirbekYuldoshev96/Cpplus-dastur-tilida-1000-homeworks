#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c;
    bool k, k1, k2,k3;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;

    k1 = ( pow(a,2) == pow(b,2) + pow(c,2) );
    k2 = ( pow(b,2) == pow(a,2) + pow(c,2) );
    k3 = ( pow(c,2) == pow(b,2) + pow(a,2) );
    k =  k1 || k2 || k3;

    cout<<"Rostlikni tekshiring: "<< k << endl;
    return 0;
}
