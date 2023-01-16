#include <iostream>

using namespace std;

int main()
{
    int a,b,c, x;

    cout<<"a qiymat : "; cin>>a;
    cout<<"b qiymat : "; cin>>b;
    cout<<"c qiymat : "; cin>>c;
    x = a;
    a = b;
    b = c;
    c = x;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;

    return 0;
}
