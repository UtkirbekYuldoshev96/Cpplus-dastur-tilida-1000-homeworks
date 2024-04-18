#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,r,R, s;
    int b;

    cout<<"Teng yonli to'g'ri burchakli uchburchar qaysi elementi tanlang";
    cout<<"1.tomon\n 2.ichki aylana\n 3.tashqi aylana\n 4.yuzi";

    cin>>b;
    switch(b){
        case 1: cout<<"a = "; cin>>a;
        r = sqrt(3) * a / 6; R = r*2; s = pow(a,2) *sqrt(3) / 4;
        cout<<"\nr = "<<r<< "\nR = "<< R << "\ns = "<< s;
        break;

        case 2: cout<<"r = "; cin>>r;
        a = 6 * r /sqrt(3); R = r * 2; s = pow(a,2) * sqrt(3) / 4;
        cout<<"\na = "<<a<< "\nR = "<< R << "\ns = "<< s;
        break;

        case 3: cout<<"R = "; cin>>R;
        r = r * 2; a = 6 * r / sqrt(3); s = pow(a,2) * sqrt(3) / 4;
        cout<<"\nr = "<<r<< "\na = "<< a << "\ns = "<< s;
        break;

        case 4: cout<<"s = "; cin>>s;
        a = sqrt(4 * s / sqrt(3)); r =sqrt(3); a / 6; R = r*2;
        cout<<"\na = "<<a<< "\nr = "<< r << "\nR = "<< R;
        break;
    }
    return 0;
}
