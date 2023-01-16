#include <iostream>

using namespace std;

void qarshilik(float r1, float r2, float r3){
    float R;
    R= r1*r2*r3/r1*r2+r1*r3+r2*r3;
    cout<<"Qarshilik parelel xisoblang = "<<R<<endl;
}
int main()
{
    float a, b,c;
    cout<<"R1 son kiriting: "; cin>>a;
    cout<<"R2 son kiriting: "; cin>>b;
    cout<<"R3 son kiriting: "; cin>>c;

    qarshilik(a,b,c);
    return 0;
}
