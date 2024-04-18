#include <iostream>

using namespace std;

int main()
{
    float A,B,C, n,m;
    cout<<"A = "; cin>>A;
    cout<<"B = "; cin>>B;
    cout<<"C = "; cin>>C;
    n = A/C;
    m=B/C;

    cout<<"Barcha joylashgan kvdratlar soni "<<n*m<<" ta"<<endl;
    cout<<"Ortib qolgan yuza "<<A*B-n*m*(C*C)<<" ga teng!"<<endl;
    return 0;
}
