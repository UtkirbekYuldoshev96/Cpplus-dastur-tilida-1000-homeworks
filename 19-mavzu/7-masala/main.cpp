#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, s = 1;
    cout<<"n = "; cin>>n;

    while(pow(s,2) <= n){
        s++;
    }

    cout<<"Summa = "<< s << endl;
    return 0;
}
