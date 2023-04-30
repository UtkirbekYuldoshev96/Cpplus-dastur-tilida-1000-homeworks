#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;

    if(a>b){
        cout<<a << " katta == "<< b << " kichik"<< endl;
    }else{
        cout<<b << " katta == "<< a << " kichik"<< endl;
    }
    return 0;
}
