#include <iostream>
#include <cmath>
using namespace std;
// pi
double Pi = 3.14;
void mayatnik(float L){
    float T, g=9.81;
    T = 2*Pi*sqrt(L/g);
    cout<<"Mayatnik tebranishi davri = "<<T<<endl;
}

void uch(float a){
    float S;
    S=sqrt(3)/4*pow(a,2);
    cout<<"Uchburchakning yuz ="<<S<<endl;
}
int main()
{
    float a;
    cout<<"a kiritng: "; cin>>a;
    uch(a);
    mayatnik(a);
    return 0;
}
