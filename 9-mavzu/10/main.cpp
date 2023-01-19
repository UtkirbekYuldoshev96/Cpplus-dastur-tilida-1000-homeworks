#include <iostream>

using namespace std;

int main()
{
    int a,b;
    bool k;
    cout<<"a son = "; cin>>a;
    cout<<"b son = "; cin>>b;
    k = ((a%2==1) || (b%2==1)) && ((b%2==1) || (a%2==1));
    cout<<"A va B sonlardan bir true = "<< k << endl;
    return 0;
}
