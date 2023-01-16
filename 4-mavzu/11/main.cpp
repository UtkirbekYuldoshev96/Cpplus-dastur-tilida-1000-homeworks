#include <iostream>
#include <cmath>
using namespace std;

void modul_topish(float a, float b){
    float S;
    float Y;
    float M1;
    float M2;

    Y=a+b;
    S=a*b;
    M1 = fabs(a);
    M2 = fabs(b);

    cout<<"yig'indi = "<<Y<<endl;
    cout<<"ko'paytmasi = "<<S<<endl;
    cout<<"modul a= "<<M1<<endl;
    cout<<"modul b= "<<M2<<endl;
}

int main()
{
    float a,b;
    cout<<"a qiymat = "; cin>>a;
    cout<<"b qiymat = "; cin>>b;

    modul_topish(a,b);
    return 0;
}
