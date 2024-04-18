#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"n son kiriting:"; cin>>n;

    cout<<"Birliklar xonasi = "<< n%10 << endl;
    cout<<"O'nliklar xonasi = "<< n/10 << endl;
    cout<<"Yigindisi = "<< n%10 + n/10 << endl;
    return 0;
}
