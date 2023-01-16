#include <iostream>

using namespace std;

int main()
{
    int v; // km/soat
    int u; // km/ soat
    int t1;
    int t2;

    cout<<"v qayiq tezlik kiriting: "; cin>> v;
    cout<<"u daryo tezlik kiriting: "; cin>> u;
    cout<<"oqib bo'yicha tezlik kiriting: "; cin>> t1;
    cout<<"oqimga qarshi tezlik kiriting: "; cin>> t2;

    cout<<"Natija  = "<< (v+u) * t1 + (v - u) * t2 << endl;
    return 0;
}
