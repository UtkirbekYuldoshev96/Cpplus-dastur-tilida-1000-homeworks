#include <iostream>
#include <math.h>
using namespace std;
const double pi = 3.14;
int main()
{
    int n;
    double r, d, l,s;
    cout<<"Yunalish kiriting:\n";
    cout<<"1-Radius 2-Diametr 3-Uzunlig 4-Yuzasi \n";
    cin>>n;

    switch(n){
        case 1:cout << "r="; cin >> r;
        d = 2 * r; l = 2 * M_PI * r; s = M_PI * r * r;
        cout << "\nd=" << d << "\nl=" << l << "\ns=" << s; break;

        case 2:cout << "d="; cin >> d;
        r = d / 2; l = 2 * M_PI * r; s = M_PI * r * r;
        cout << "\nr=" << r << "\nl=" << l << "\ns=" << s; break;

        case 3:cout << "l="; cin >> l;
        r = l / (2 * M_PI); d = 2 * r; s = M_PI * r * r;
        cout << "\nr=" << r << "\nd=" << d << "\ns=" << s; break;

        case 4:cout << "s="; cin >> s;
        r = sqrt( s / M_PI ); d = 2 * r; l = 2 * M_PI * r;
        cout << "\nr=" << r << "\nd=" << d << "\nl=" << l; break;
    }
    return 0;
}
