#include <iostream>

using namespace std;

int main()
{
    double A1, B1, C1, A2, B2, C2, x, y, d;
    cout<<"A1 = "; cin>>A1;
    cout<<"B1 = "; cin>>B1;
    cout<<"C1 = "; cin>>C1;

    cout<<"A2 = "; cin>>A2;
    cout<<"B2 = "; cin>>B2;
    cout<<"C2 = "; cin>>C2;

    d = (A1*B2 - A2*B1);
    x = (C1*B2 - C2*B1) / d;
    y = (A1*C2 - A2*C1) / d;

    cout<<"x = "<< x << endl;
    cout<<"y = "<< y << endl;

    return 0;
}
