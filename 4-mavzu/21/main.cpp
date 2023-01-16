#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c;
    float y1,y2,y3;
    float p;
    float S, P;

    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;
    cout<<"p = "; cin>>p;

    S = sqrt(p*(p-a)*(p-b)*(p-c));
    P= (a+b+c)/2;

    cout<<"uchburchakning yuzi = "<<S<<endl;
    cout<<"perimetri = "<<P<<endl;

    return 0;
}
