#include <iostream>

using namespace std;

int main()
{
    float x,y;
    bool z;
    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;

    z = (x<0 && y>0);
    cout<<"Rostlikni tekshiring ="<<z << endl;
    return 0;
}
