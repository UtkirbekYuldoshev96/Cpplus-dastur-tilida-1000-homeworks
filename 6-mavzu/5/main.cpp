#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int x,y;
    cout<<"a kesma kiriting: "; cin>> a;
    cout<<"b kesma kiriting: "; cin>> b;

    x = a / b;
    y = a % b;

    cout<<"a kesmada ichida b joylashadi "<< x << endl;
    cout<<"a kesmada joylashmagan "<< y << endl;
    return 0;
}
