#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int add = 0;

    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;

    while(a>b){
        a -=b;
        add+=1;
    }
    cout<<"Jami = "<< add << endl;
    cout<<"a = "<< a << endl;
    return 0;
}
