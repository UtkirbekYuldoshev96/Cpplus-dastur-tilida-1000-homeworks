#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1,x2;
    double y1,y2;
    double d;

    cout<<"x1 = "; cin>>x1;
    cout<<"x2 = "; cin>>x2;
    cout<<"y1 = "; cin>>y1;
    cout<<"y2 = "; cin>>y2;

    d = sqrt(pow(x1 - x2, 2) + pow(y1-y2,2));
    cout<< "Koordenatalar masofasini hisoblavchi = "<< d << endl;
    return 0;
}
