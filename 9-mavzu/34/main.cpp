#include <iostream>

using namespace std;

int main()
{
    int x,y;
    bool z;
    cout<<"x ="; cin>>x;
    cout<<"y ="; cin>>y;

    z = (x+y)%2==1;
    cout<<"Jumalani tekshiring = "<<z<<endl;
    return 0;
}
