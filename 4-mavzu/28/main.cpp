#include <iostream>
#include <cmath>
using namespace std;
void son(float a){
    cout<<"a^2 = "<<pow(a,2)<<endl;
    cout<<"a^3 = "<<pow(a,3)<<endl;
    cout<<"a^5 = "<<pow(a,5)<<endl;
    cout<<"a^10 = "<<pow(a,10)<<endl;
    cout<<"a^15 = "<<pow(a,15)<<endl;
}
int main()
{
    float a;
    cout<<"a son kiriting : "; cin>>a;
    son(a);
    return 0;
}
