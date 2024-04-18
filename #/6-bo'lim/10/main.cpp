#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<" n son = "; cin>>n;
    cout<<"Birliklar = "<< (n/100)%10 << endl;
    cout<<"o'nliklar = "<< (n/10)%10 << endl;

    return 0;
}
