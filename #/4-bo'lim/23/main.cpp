#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"A = "; cin>>a;
    cout<<"B = "; cin>>b;
    cout<<"C = "; cin>>c;

    d = c;
    c = b;
    b = a;
    a = d;

    cout<<"A soni = "<< a << endl;
    cout<<"B soni = "<< b << endl;
    cout<<"C soni = "<< c << endl;
    return 0;
}
