#include <iostream>

using namespace std;

int main()
{
    int s;
    cout<<"Kun boshidan necha sekun utdi: "; cin>>s;
    s = (s / 60) / 60;
    cout<< s <<" soat o'tdi \n";
    return 0;
}
