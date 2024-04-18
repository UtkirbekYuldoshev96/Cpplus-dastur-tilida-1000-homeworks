#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14;

int main()
{
    double R, L, S;
    cout<<"R = "; cin>>R;

    L = 2 * PI * R;
    S = PI * pow(R,2);

    cout<<"Uzunligi = "<< L << endl;
    cout<<"Yuzasi = "<< S << endl;
    return 0;
}
