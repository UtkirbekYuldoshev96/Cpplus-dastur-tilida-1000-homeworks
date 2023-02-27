#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;

    if(a>b && b>c){
       cout<<"qanotlantiradi"<< endl;
    }else{
        cout<<"qanotlantirmaslik"<< endl;
    }
    return 0;
}
