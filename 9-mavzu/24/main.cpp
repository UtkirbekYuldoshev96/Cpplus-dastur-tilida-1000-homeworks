#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    double D;
    bool k;
    cout<<"a son = "; cin>>a;
    cout<<"b son = "; cin>>b;
    cout<<"c son = "; cin>>c;

    D =  pow(b,2)-4*a*c;
    k = ( D > 0);
    cout<<"Rostlikni tekshiring: "<< k << endl;
    cout<<"Ax^2+Bx+C= "<< D << endl;
    return 0;
}
