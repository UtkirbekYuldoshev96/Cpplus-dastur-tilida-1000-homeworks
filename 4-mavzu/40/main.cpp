#include <iostream>

using namespace std;

int main()
{
    double A,B,C;
    double A2,B2,C2;
    double D,x,y;

    cout<<"A qiymat kiring: "; cin>>A;
    cout<<"B qiymat kiring: "; cin>>B;
    cout<<"C qiymat kiring: "; cin>>C;

    cout<<"A2 qiymat kiring: "; cin>>A2;
    cout<<"B2 qiymat kiring: "; cin>>B2;
    cout<<"C2 qiymat kiring: "; cin>>C2;

    D = (A*B2 - A2*B);
    y = (A*C2 - A2*C) / D;
    x = (C*B2 - C2*B) / D;

    cout<<"x = "<< x<<endl;
    cout<<"y = "<< y<<endl;

    cout<<"<<<==== sestema ===>>>"<<endl;
    cout<< "C1 = "<<A * x + B * y<<endl;
    cout<< "C2 = "<<A2 * x + B2 * y<<endl;

    return 0;
}
