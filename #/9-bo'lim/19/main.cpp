#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    bool x;
    cout<<"a ="; cin>>a;
    cout<<"b ="; cin>>b;
    cout<<"c ="; cin>>c;

    x = (a+b == 0 || a+c == 0|| b+c ==0);
    cout<<"Rostlikni tekshiring = "<< x << endl;
    return 0;
}
