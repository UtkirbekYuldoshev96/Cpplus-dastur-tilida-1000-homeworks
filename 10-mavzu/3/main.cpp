#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x,y,z;
    double max , min;

    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;
    cout<<"z = "; cin>>z;

    max = (x>y && x>z) ? (x+y+z) : (x*y*z);
    min = (x<y && x<z) ? (x+y+z/2) : (x*y*z);

    cout<<"max = "<< max << endl;
    cout<<"min = "<< pow(min,2) + 1 <<endl;
    return 0;
}
