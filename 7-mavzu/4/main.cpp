#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long double x,n;
    cout<<"n son kiritng = "; cin>>n;

    x = n * 3.14 /180;
    n = (sin(x) * n + cos(x)*n)/cos(x)*n;
    cout<<"natija = "<< n << endl;
    return 0;
}
