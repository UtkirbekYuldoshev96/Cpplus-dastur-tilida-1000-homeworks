#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"n sekund kiriting: "; cin>>n;
    cout<<"Kun boshidan "<< n/3600 << " va ";
    cout<<n%60<<" minut va "<<n/60<<" sekund o'tdi!";
    return 0;
}
