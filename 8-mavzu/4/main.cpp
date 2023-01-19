#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cout<<"N son kiring "; cin>>n;
    k = ((n % 2 == 0) == true) || ((n % 2 == 1) == false);
    cout<<"natija  = "<< k << endl;

    return 0;
}
