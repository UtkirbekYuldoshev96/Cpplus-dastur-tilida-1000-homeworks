#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float k, g,h,s;
    int a;

    cout<<"Teng yonli - berilganini tanlang \n";
    cout << " 1.katet\n 2.gipotenuza\n 3.balandlik \n 4.Yuzi\n";
    cin >> a;

    switch(a){
        case 1: cout<<"k = "; cin>>k;
        g = sqrt(2) *k; h = g/2; s = pow(k,2)/2;
        cout<<"\nGipotenuza="<<g<<"\nBalandlik = "<<h<<"\nyuza = "<<s; break;

        case 2: cout<<"g ="; cin>>g;
        k = g/sqrt(2); h = g/2; s = pow(k,2)/2;
        cout<<"\nGipotenuza="<<k <<"\nBalandlik = "<<h<<"\nyuza = "<<s; break;

        case 3: cout<<"h = "; cin>>h;
        k = h * sqrt(2); g = h*2; s = pow(k,2)/2;
        cout<<"\nKatet = "<< k << "\nBalandlik = "<<h<<"\nyuza = "<<s; break;

        case 4: cout<<"s="; cin>>s;
        k = sqrt(2 * s); g = sqrt(2) * k; h = g / 2;
        cout << "\nkatet=" << k << "\ngipotenuza=" << g << "\nbalandlik=" << h; break;
    }
    return 0;
}
