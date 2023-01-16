#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    double b;
    cout<<"a = "; cin>> a;
    cout<<"b = "; cin>> b;

    cout<<"Butun 1"<< ((int)a) / ((int)b) << endl;
    cout<<"Butun 2"<< floor(a) / floor(b) << endl;
    return 0;
}
