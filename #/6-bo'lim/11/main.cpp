#include <iostream>

using namespace std;

int main()
{
    int n, x,a,b,c;
    cout<<" n son = "; cin>>n;
    a = (n%100)%10;
    b = (n/10)%10;
    c = n/100;
    x = a + b + c;
    cout<<"Birliklar = "<< a << endl;
    cout<<"o'nliklar = "<< b << endl;
    cout<<"o'nliklar = "<< c << endl;
    cout<<"Yig'indi = "<< x << endl;

    return 0;
}
