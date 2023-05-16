#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;

    /*
    if(a == b){
        cout<<"0 teng "<< a << " " << b << endl;
    }else{
        cout<<"Yig'indisi = "<< a + b << endl;
    }
    */

    if(a != b){
        a = a + b;
        b = a;
    }else{
        a = 0;
        b = 0;
    }

    cout<<"a = "<< a << " "<< "b= "<< b << endl;
    return 0;
}
