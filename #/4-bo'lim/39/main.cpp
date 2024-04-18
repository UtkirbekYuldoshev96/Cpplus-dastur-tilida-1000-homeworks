#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double A, B, C, x;
    cout<<"A = "; cin>>A;
    cout<<"B = "; cin>>B;
    cout<<"C = "; cin>>C;

    x = B * B - 4 * A * C;
    cout<<"x1 = "<< (-B-sqrt(x))/(2*A) << "\nx2 ="<< (-B+sqrt(x)) / (2*A) << endl;

    return 0;
}
