#include <iostream>

using namespace std;

int main()
{
    double x,y,z;
    double max , min;

    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;
    cout<<"z = "; cin>>z;

    max = (x>y) ? x : (y>z) ? y : z;
    min = (x<y) ? x : (y<z) ? y : z;

    cout<<"max = "<< max << endl;
    cout<<"min = "<< min << endl;

    return 0;
}
