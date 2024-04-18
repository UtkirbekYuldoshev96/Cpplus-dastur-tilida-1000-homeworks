#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, s = 0;
    int power = 1;
    cout<<"n = "; cin>>n;

    while(n > power ){
        s++;
        power = pow(3, s);
    }

    cout<<"Summa = "<< s  << endl;
    return 0;
}
