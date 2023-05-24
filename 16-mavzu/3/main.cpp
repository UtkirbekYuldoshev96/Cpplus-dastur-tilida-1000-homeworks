#include <iostream>

using namespace std;

int main()
{
    int a,b, son = 0;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;

    for(int i=b-1; i>=a; i--){
        cout<<"i = "<< i << endl;
        son++;
    }
    cout<<"Raqamlar yig'indisi = "<< son << endl;

    return 0;
}
