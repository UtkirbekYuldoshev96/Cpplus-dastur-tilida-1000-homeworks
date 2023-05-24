#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,sum=0;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;

    for(int i=a; i<=b; i++){
        sum +=pow(i,2);
        cout<<"Summa = "<< sum << endl;
    }

    return 0;
}
