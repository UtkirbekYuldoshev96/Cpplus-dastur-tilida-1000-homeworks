#include <iostream>

using namespace std;

int main()
{
    float x, y, x1, y1, x2, y2;
    bool k, k1, k2;
    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;

    cout<<"x1 = "; cin>>y;
    cout<<"y1 = "; cin>>y;

    cout<<"x2 = "; cin>>y;
    cout<<"y2 = "; cin>>y;

    k1 = (x > x1 && x < x2 ) || ( x < x1 && x > x2);
    k2 = (y > y1 && y < y2 ) || ( y < y1 && y > y2);
    k = ( k1 ) && ( k2 );

    cout<<"Rostlikni tekshiring: "<< k << endl;
    return 0;
}
