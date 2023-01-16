#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    int resalt;
    cout<<"n son  kirintg :"; cin>>n;
    a = (n/100)%10;
    b = (n/10)%10;
    n = (n%10)%10;
    resalt = (a * 100 + b * 10) / 10;

    cout<<"natija = "<< resalt << endl;

    return 0;
}
