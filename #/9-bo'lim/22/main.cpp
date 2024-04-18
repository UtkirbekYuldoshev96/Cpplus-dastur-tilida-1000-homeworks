#include <iostream>

using namespace std;

int main()
{
    int a,b,c, k;
    bool x;
    cout<<"k = "; cin>>k;

    a = k/100;
    b = (k%100)/10;
    c = k%10;
    x = (a<b && b<c) || (c<b && b<a);
    cout<<"Jumalani tekshiring ="<< x << endl;
    return 0;
}
