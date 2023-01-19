#include <iostream>

using namespace std;

int main()
{
    int a,b;
    bool k;
    cout<<"a son = "; cin>>a;
    cout<<"b son = "; cin>>b;
    k = (a >= 0 || b < 2);
    cout<<"Qiymatin = "<< k << endl;
    return 0;
}
