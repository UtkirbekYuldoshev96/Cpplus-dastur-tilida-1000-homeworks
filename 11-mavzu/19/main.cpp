#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;
    cout<<"d = "; cin>>d;
    if(a==b && b==c){
        cout<<"4 son = "<<d<< endl;
    }
    if(a==b && b==d){
        cout<<"3 son = "<<c<<endl;
    }
    if(a==c && d==c){
        cout<<"2 son = "<<b<<endl;
    }
    if(c==b && b==d){
        cout<<"1 son ="<< endl;
    }
    return 0;
}
