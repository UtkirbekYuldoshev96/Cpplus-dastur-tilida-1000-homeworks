#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;

    if(abs(a-b) < abs(a-c)){
        cout<<"B nuqta yaqin joylashgan = "<< abs(a-b)<<endl;
    }else{
        cout<<"C nuqta yaqin joylashgan = "<<abs(a-c)<<endl;
    }
    return 0;
}
