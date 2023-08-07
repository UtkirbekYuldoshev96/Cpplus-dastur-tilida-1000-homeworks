#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"a= "; cin>>a;
    cout<<"b= "; cin>>b;
    cout<<"c= "; cin>>c;

    if(a==b){
        cout<<"3 son = "<< c << endl;
    }
    if(a==c){
        cout<<"2 son = "<< b << endl;
    }
    if(b==c){
        cout<<"1 son = "<< a << endl;
    }
    return 0;
}
