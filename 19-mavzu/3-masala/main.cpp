#include <iostream>

using namespace std;

int main()
{
    int n;
    int k;
    int son = 0;
    cout<<"n son = "; cin>>n;
    cout<<"k son = "; cin>>k;

    // n > k
    while(n >= k){
        n = n - k;
        son++;
    }

    cout<<"Summa = "<< son <<" qolidiq = "<< n << endl;
    return 0;
}
