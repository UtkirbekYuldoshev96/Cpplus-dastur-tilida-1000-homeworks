#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double d;

    cout<<"a qiymat kiring: "; cin>>a;
    cout<<"b qiymat kiring: "; cin>>b;
    cout<<"c qiymat kiring: "; cin>>c;

    d = (b*b)-4*a*c;
    cout<<"x(1) = "<<(-b - sqrt(d)) / (2*a)<<" qiymati\n";
    cout<<"x(2) = "<<(-b + sqrt(d)) / (2*a)<<" qiymati\n";
    return 0;
}
