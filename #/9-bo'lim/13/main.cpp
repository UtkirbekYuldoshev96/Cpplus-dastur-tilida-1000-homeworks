#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    bool x;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;

    x = (a>0 || b>0 || c>0);
    cout<<"Rostlikni tekshiring = "<< x << endl;
    return 0;
}
