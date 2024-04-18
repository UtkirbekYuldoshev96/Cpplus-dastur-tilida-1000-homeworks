#include <iostream>

using namespace std;

int main()
{
    int a,b;
    bool x;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;

    x = (a%2==1 && b%2 ==0) || (a%2 ==0 && b%2==1);
    cout<<"Rostlikni tekshiring = "<< x << endl;
    return 0;
}
