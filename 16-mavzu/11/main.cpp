#include <iostream>
using namespace std;
int main()
{
    int n, s=0;
    cout<<"n = "; cin>>n;

    for(int i=n; i<=2*n; i++){
        s += i*i;
        cout<<"Summa  = "<< s << endl;
    }
    return 0;
}
