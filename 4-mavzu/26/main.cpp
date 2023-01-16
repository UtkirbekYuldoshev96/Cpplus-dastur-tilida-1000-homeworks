#include <iostream>
#include <cmath>
using namespace std;
void funksiyXisobla(float x){
    float y;
    y = 4*pow(x-3,6)-7*pow(x-3,3)+2;
    cout<<"y = "<< y<<endl;
}
int main()
{
    float x;
    cout<<"funksiya x qiymat kiriting: "; cin>>x;
    funksiyXisobla(x);
    return 0;
}
