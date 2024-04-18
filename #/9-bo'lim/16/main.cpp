#include <iostream>

using namespace std;

int main()
{
    int a;
    bool x;
    cout<<"a = "; cin>>a;

    x = (a>9 && a<100) && (a%2 == 0);
    cout<<"Rostlikni tekshiramiz = "<<x<< endl;
    return 0;
}
