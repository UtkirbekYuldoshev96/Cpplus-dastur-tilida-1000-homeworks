#include <iostream>

using namespace std;

int main()
{
    int n,m;
    bool k;
    cout<<"N son kiring "; cin>>n;
    cout<<"M son kiring "; cin>>m;
    k = ((n % m == 0) == false) || ((n % m == 1) == true);
    cout<<"natija  = "<< k << endl;

    return 0;
}
