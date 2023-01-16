#include <iostream>

using namespace std;

int main()
{
    int s, m, k;
    cout<<"sekun kiring: "; cin>> s;

    m = (s/ 60) / 60;
    k = (s%60);
    s = (s % 60) % 60;
    cout<<m<<" soat "<< k <<" minut "<< s <<" sekund o'tdi"<<endl;
    return 0;
}
