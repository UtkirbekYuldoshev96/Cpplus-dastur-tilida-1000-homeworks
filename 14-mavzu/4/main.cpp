#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // ax^2+bx+c=0 tengmala
    float a,b,c,reslat;
    diskriment:

    cout<<"a "; cin>>a;
    cout<<"b "; cin>>b;
    cout<<"c "; cin>>c;
    reslat = -pow(b,2) - 4*a*c;
    if(reslat<0){
        cout<<"diskriment qayt kiriting mafiy son qabul qilinmaydi\n";
        goto diskriment;
    }else{
        cout<< "Dastur tugallandi!"<<endl;
    }

    return 0;
}
