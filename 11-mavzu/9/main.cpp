#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    cout<<"a ="; cin>>a;
    cout<<"b ="; cin>>b;


    if(a>b){
    c = a;
    a = b;
    b = c;
    }

    cout<<a << " " << b << endl;
    return 0;
}
