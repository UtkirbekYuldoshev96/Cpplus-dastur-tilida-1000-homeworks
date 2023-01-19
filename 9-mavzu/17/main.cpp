#include <iostream>

using namespace std;

int main()
{
    int n;
    bool k;
    cout<<"n son kiriting : "; cin>>n;
    k = (n > 99 && n < 1000) && ( n % 2 == 1 );
    cout<<"Berilgan son xonali toq = "<< k << endl;
    return 0;
}
