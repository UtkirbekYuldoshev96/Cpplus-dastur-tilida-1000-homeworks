#include <iostream>

using namespace std;

int main()
{
    int a,b;
    bool k;
    cout<<"a son = "; cin>>a;
    cout<<"b son = "; cin>>b;

    k= (a%2 == 1) && (b%2 == 1);
    cout<<"A va B sonlar toq son aniqlang = "<< k << endl;
    return 0;
}
