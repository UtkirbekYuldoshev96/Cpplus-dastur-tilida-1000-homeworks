#include <iostream>

using namespace std;

int main()
{
    int x, a,b,number;
    cout<<"x = "; cin>>x;

    a = x%100;
    b = x/100;
    number = a*10+b;
    cout<<"Hosil bo'lgan son = "<< number<< endl;
    return 0;
}
