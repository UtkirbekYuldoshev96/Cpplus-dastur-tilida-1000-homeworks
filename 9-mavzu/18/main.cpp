#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    bool k;

    cout<<"a son "; cin>>a;
    cout<<"b son "; cin>>b;
    cout<<"c son "; cin>>c;

    k = (a == b || b == c || a==c);
    cout<<"Mujlani rostlikgin tekshiring "<< k << endl;
    return 0;
}
