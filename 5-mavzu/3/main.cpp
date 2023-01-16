#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    double p, s;

    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;

    p = a + b + c / 2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));

    cout<<"Geron yuzi: "<< s << endl;

    return 0;
}
