#include <iostream>
#include <cmath>
using namespace std;
void son(float a){
    cout<<"a^2 = "<<pow(a,2)<<endl;
    cout<<"a^4 = "<<pow(a,4)<<endl;
    cout<<"a^8 = "<<pow(a,8)<<endl;
}
int main()
{
    float a;
    cout<<"a son kiriting : "; cin>>a;
    son(a);
    return 0;
}
