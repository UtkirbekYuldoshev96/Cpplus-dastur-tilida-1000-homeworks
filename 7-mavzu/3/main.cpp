#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long double z;
    cout<<"z son kiriting: "; cin>>z;

    z = 1 + (pow(z,2) / (3 + pow(z,2) / 5));
    cout<<"hisoblang = "<< z << endl;
    return 0;
}
