#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a,b, c, P;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;

    c = sqrt(pow(a,2) + pow(b,2));
    P = a + b + c;

    cout<<"Gipotenuza = "<< c << endl;
    cout<<"Perimetr = "<< P << endl;

    return 0;
}
