#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 int n,a,b;
    int resalt;
    cout<<"n son  kirintg :"; cin>>n;
    a = (n/100)%10;
    b = (n/10)%10;
    n = (n%10)%10;
    resalt = b * 10 + n;
    //cout<<"yuzlik son = "<< a << endl;
    //cout<<"Hosil bo'lgan son = "<< b << endl;
    cout<<"natija = "<< resalt << endl;
    //cout<<"n son = "<< n << endl;
    return 0;
}
