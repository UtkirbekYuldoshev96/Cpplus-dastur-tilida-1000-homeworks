#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    bool x;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;

    x = (b*b)-4*a*c >= 0;
    cout<<"Rostlini tekshiring = "<< x << endl;


    return 0;
}
