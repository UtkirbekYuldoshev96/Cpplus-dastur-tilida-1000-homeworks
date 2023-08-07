#include <iostream>

using namespace std;

int main()
{
    int x1,y1, x2,y2;
    bool z;

    cout<<"x1 = "; cin>>x1;
    cout<<"y1 = "; cin>>y1;
    cout<<"x2 = "; cin>>x2;
    cout<<"y2 = "; cin>>y2;

    z = (x1+y1) % 2 == (x2+y2)%2;
    cout<<"Jumlani rostlikni tekshiring  = "<<z<<endl;
    return 0;
}
