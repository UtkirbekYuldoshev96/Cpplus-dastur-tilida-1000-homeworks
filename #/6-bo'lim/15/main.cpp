#include <iostream>

using namespace std;

int main()
{
    int x, a,b,c, number;
    cout<<"x = "; cin>>x;

    a =x%10; x/=10;
    b =x%10; x/=10;
    c =x%10; x/=10;
    number  = b*100+c*10+a;
    cout<<"Natija = "<< number << endl;
    return 0;
}
