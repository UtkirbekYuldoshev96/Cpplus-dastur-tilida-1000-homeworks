#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,x;
    cout<<"a = "; cin>> a;
    cout<<"b = "; cin>> b;
    cout<<"x = "; cin>> x;

    x=pow(a,x) / sqrt(pow(a,2) + pow(b,2));
    cout<<"natija  = "<< x << endl;
    return 0;
}
