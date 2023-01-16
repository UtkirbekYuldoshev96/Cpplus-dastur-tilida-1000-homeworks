#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, n;
    cout<<"n son kiriting: "; cin>>n;
    x = n * 3.14 / 180;
    n = sin(x) * pow(x,2) + cos(pow(x,2)) * x;
    cout<<"sin x^2 + cos^2 x = "<< n << endl;

    return 0;
}
