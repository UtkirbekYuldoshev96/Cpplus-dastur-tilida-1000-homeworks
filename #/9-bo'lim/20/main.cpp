#include <iostream>

using namespace std;

int main()
{
    int a,b,c, y;
    bool x;
    cout<<"y ="; cin>>y;

    a = y /100;
    b = (y%100) /10;
    c = y%10;

    x = (a!=b && a!=c && b!=c);

    cout<<"Rostlikni tekshiring = "<< x << endl;
    return 0;
}
