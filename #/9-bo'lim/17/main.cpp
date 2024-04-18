#include <iostream>

using namespace std;

int main()
{
    int a;
    bool x;
    cout<<"a = "; cin>>a;

    x = (a>99 && a<1000) && (a%2 == 1);
    cout<<"Rostlikni tekshiramiz = "<<x<< endl;
    return 0;
}
