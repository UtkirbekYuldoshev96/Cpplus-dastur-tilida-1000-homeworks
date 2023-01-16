#include <iostream>

using namespace std;

int main()
{
    int s, m;
    cout<<"sekun kiring: "; cin>> s;

    m = (s/ 60) / 60;
    s = (s % 60) % 60;
    cout<<m<<" soat "<< s <<" sekund o'tdi"<<endl;
    return 0;
}
