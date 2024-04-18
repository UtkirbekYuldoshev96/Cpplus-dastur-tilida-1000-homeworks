#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1, x2, y1,y2;
    int P , S;

    cout<<"A nuqta kiriting: "; cin>>x1;
    cout<<"A nuqta kiriting: "; cin>>y1;

    cout<<"B nuqta kiriting: "; cin>>x2;
    cout<<"B nuqta kiriting: "; cin>>y2;

    P = 2 * (abs(x1-x2) + abs(y1-y2));
    S = abs(x1-x2) * abs(y1-y2);

    cout<< "Perimetr = "<< P << endl;
    cout<< "Yuzasi = "<< S << endl;



    return 0;
}
