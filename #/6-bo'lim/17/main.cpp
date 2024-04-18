#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"x = "; cin>>x;
    x /=100;
    x %=10;
    cout<<"Natija = " << x << endl;
    return 0;
}
