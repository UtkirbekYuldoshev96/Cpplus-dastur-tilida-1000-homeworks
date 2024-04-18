#include <iostream>

using namespace std;

int main()
{
    int x, a, b,c, number;
    cout<<"x = "; cin>>x;

    a = x%10; x/=10;
    b = x%10; x/=10;
    c = x%10; x/=10;
    number= c*100+a*10+b;
    cout<<"Natija = "<< number << endl;
    return 0;
}
