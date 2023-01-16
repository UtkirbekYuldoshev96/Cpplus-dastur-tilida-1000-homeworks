#include <iostream>

using namespace std;

int main()
{
    int x , y;
    int a , b , s;
    cout<<"kg kirintg: "; cin>>x;
    cout<<"summani kirintg: "; cin>>a;
    cout<<"kg 2 kirintg: "; cin>>y;
    cout<<"summani 2 kirintg: "; cin>>b;

    a*= x;
    b*= y;

    cout<<"1  maxsulot narxi = "<<a<<endl;
    cout<<"2  maxsulot narxi = "<<b<<endl;

    s = (a - b);
    cout<<"1 va 2 maxsulot tan narxi farqi = "<<s<<endl;

    return 0;
}
