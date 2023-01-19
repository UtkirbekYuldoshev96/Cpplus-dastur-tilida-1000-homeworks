#include <iostream>

using namespace std;

int main()
{
    int a,b;
    bool k;

    cout<<"a son = "; cin>>a;
    cout<<"b son = "; cin>>b;
    k = (a%2 == 1) || (b%2 == 1);
    cout<<"A va B son bir toq son = "<< k << endl;
    return 0;
}
