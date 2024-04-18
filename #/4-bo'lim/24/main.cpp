#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"A soni = "; cin>>a;
    cout<<"B soni = "; cin>>b;
    cout<<"C soni = "; cin>>c;

    d = a;
    a = b;
    b = c;
    c = d;

    cout<<"Nuqtalar qiymati almashtirildi"<<endl;
    cout<<"A = "<< a << endl;
    cout<<"B = "<< b << endl;
    cout<<"C = "<< c << endl;
    return 0;
}
