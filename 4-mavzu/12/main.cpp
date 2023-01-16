#include <iostream>
#include <cmath>
using namespace std;
void uch(float a, float b){
    float c,S;
    float P;

    cout<<"c funkisiya da "; cin>>c;
    P = a+b+c;
    S=sqrt(pow(a,2)+pow(b,2));
    cout<<"To'g'ri to'rt burchakning gepotezunasi = "<<c<<endl;
    cout<<"To'g'ri to'rt burchakning paremetri = "<<P<<endl;
}
int main()
{
    float a,b;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    uch(a,b);
    return 0;
}
