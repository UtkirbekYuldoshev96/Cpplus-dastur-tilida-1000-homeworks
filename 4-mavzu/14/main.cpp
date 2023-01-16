#include <iostream>
#include <cmath>
using namespace std;
float PI =3.14; // pi soni
void Formula(float R){
    float L,S;

    L=2*PI*R;
    S=PI*pow(R,2);

    cout<<"uzunligi = "<<L<<endl;
    cout<<"yuzasi = "<<S<<endl;
    // 15 masalasi yechimi
    cout<<"diametri = "<<R*R<<endl;
}

int main()
{
    float R; // radius

    cout<<"Radiusi kiriting: "; cin>>R;
    Formula(R);

    return 0;
}
