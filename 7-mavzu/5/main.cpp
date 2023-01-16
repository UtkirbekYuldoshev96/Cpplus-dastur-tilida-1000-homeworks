#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long double x, y, n;
    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;
    x = x *3.14 / 180;
    n = sin(x + y) + exp(x)/ cos(x) + cos(y);
    cout<<"hosib = "<< n << endl;

    return 0;
}
