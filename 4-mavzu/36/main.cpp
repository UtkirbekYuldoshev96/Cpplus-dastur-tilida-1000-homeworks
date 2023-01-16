#include <iostream>

using namespace std;

int main()
{
    int v1, v2;
    int t;
    int s;

    cout<<"1 chi avtomobil :"; cin>>v1;
    cout<<"2 chi avtomobil :"; cin>>v2;
    cout<<"km/soat kiring :"; cin>>t;
    cout<<"masofa kiring :"; cin>>s;

    v1 *= t;
    v2 *= t;

    s += v1 + v2;
    cout<<"1 va 2 avtomobil orasidagi masofa: "<< s<<endl;

    return 0;
}
