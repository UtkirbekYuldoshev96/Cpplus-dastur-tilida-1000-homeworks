#include <iostream>
using namespace std;
void Kesma(float a, float b, float c){
    float AC;
    float BC;
    float ABC;

    AC = a*c;
    BC = b*c;

    cout<<"AC nuqta = "<<AC<<endl;
    cout<<"BC nuqta = "<<BC<<endl;
    cout<<"AC * BC ko'paymasi = "<<AC*BC<<endl;
}
int main()
{
    float a,b,c;
    cout<<"a qiymat = "; cin>>a;
    cout<<"b qiymat = "; cin>>b;
    cout<<"c qiymat = "; cin>>c;

    Kesma(a,b,c);
    return 0;
}
