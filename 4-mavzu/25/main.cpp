#include <iostream>
#include <cmath>
using namespace std;
void funksiyXisobla(float x){
    float y;
    y = 3*pow(x,6)-6*pow(x,2)-7;
    cout<<"y = "<< y<<endl;
}
int main()
{
    float x;
    cout<<"funksiya x qiymat kiriting: "; cin>>x;
    funksiyXisobla(x);
    return 0;
}
