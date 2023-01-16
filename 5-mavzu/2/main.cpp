#include <iostream>

using namespace std;

int main()
{
    int n, x,y;
    cout<<"o'nlar xonasidagi n son kiriting: "; cin>> n;
    x =  n % 10;
    y = n / 10;

    cout<<"o'nlar xonasidagi son = "<< y <<endl;
    cout<<"bir xonasidagi son = "<< x <<endl;
    cout<<"raqamlar yi'indisi = "<< x + y <<endl;
    return 0;
}
