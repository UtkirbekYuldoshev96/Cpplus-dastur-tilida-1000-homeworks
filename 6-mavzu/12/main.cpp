#include <iostream>

using namespace std;

int main()
{

    int n,s,m;
    cout<<"yuz xonali son kiritng: "; cin>>n;
    s = (n/100)%10;
    m = (n/10)%10;
    n = n%10;

    cout<<"birlar xonasi = "<<n<<endl;
    cout<<"o'nlilar xonasi = "<<m<<endl;
    cout<<"yuzlik xonasi = "<<s<<endl;
    cout<<"Teskarilanan son = "<<n * 100 + m * 10 + s<<endl;
    cout<<"teskari yig'indi = "<<n + m + s<<endl;

    return 0;
}
