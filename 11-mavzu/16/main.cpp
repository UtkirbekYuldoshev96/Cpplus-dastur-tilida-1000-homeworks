#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"a ="; cin>>a;
    cout<<"b ="; cin>>b;
    cout<<"c ="; cin>>c;

    if(a<=b && b<=c){
        a*=2;
        b*=2;
        c*=2;
    }else{
        a=-a;
        b=-b;
        c=-c;
    }
    cout<<"A = "<< a<< " B= "<< b << "C = "<<c<< endl;
    return 0;
}
