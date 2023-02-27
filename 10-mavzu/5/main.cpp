#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;

    if(a>=b && b>=c){
        a=pow(a,2);
        b=pow(b,2);
        c=pow(c,2);

        cout<<"a++ = "<< a << endl;
        cout<<"b++ = "<< b << endl;
        cout<<"c++ = "<< c << endl;
    }else{
        cout<<"a = "<< a << endl;
        cout<<"b = "<< b << endl;
        cout<<"c = "<< c << endl;
    }
    return 0;
}
