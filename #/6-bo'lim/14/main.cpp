#include <iostream>

using namespace std;

int main()
{
    int x,a,b,number;
    cout<<"x = "; cin>>x;

    a = x%10;
    b = x/10;
    number = a*100+b;
    cout<<"Hosil bo'lgan son = "<< number<< endl;
    return 0;
}
