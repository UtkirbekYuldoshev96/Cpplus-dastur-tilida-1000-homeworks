#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c;
    int k , m;
    bool natija;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;
    k = pow(a,2) + pow(b,2);
    m = pow(c,2);
    natija = ((k == m) == true) && ((k != m)== false);

    cout<< "pifagor son bo'lsa 1 yoki yo'q bo'lsa 0 qaytaradi!"<< endl;
    cout<< "bool natija = "<< natija << endl;
    return 0;
}
