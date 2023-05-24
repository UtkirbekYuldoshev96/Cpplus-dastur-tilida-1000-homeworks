#include <iostream>
using namespace std;
void masala(){
    int a,b,c;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;

    if(a>b && c>b){

    }
}

int main()
{
    int a, b,c;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;

    if(a>b && c>b){
        cout<<"a = "<< a << " c = "<<c << endl;
    }
    if(b>a && c > a){
        cout<<"b = "<< b << " c = "<< c << endl;
    }

    if(a>c && b>c){
        cout<<"c = " << a <<" c = "<< c << endl;
    }
    return 0;
}
