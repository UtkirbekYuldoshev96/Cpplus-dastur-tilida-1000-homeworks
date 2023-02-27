#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    bool k;

    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;

    k = (a + b > c) && (a+c > b) && (c + b > a);
    cout<<"Rostlikni tekshiring : "<< k <<endl;
    return 0;
}
