#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    double long r;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;

    b = sqrt(pow(c,2)-pow(a,2));
    r = a + b+c/a*b;

    cout<<"Uchburchak ikkinchi kateti "<< r << endl;
    return 0;
}
