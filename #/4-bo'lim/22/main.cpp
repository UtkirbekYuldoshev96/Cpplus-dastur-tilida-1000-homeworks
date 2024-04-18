#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"A = "; cin>> a;
    cout<<"B = "; cin>> b;

    c = a;
    a = b;
    b = c;

   // swap(a,b);


    cout<<"A = "<< a << endl;
    cout<<"B = "<< b << endl;
    return 0;
}
