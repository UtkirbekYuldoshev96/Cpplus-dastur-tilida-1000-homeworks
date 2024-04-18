#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    double long x1,x2,y1,y2,x3,y3, S, P, a,b,c;
    cout<<"1-nuqta  x1 = "; cin>>x1;
    cout<<"1-nuqta y1 = "; cin>>y1;
    cout<<"2-nuqta x2 = "; cin>>x2;
    cout<<"2-nuqta y2 = "; cin>>y2;
    cout<<"3-nuqta x3 = "; cin>>x3;
    cout<<"3-nuqta y3 = "; cin>>y3;

    a = sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));
    b = sqrt((x1-x3) * (x1-x3) + (y1-y3) * (y1-y3));
    c = sqrt((x2-x3) * (x2-x3) + (y2-y3) * (y2-y3));

    P = (a + b + c) / 2;
    S = sqrt(P*(P-a)*(P-b)*(P-c));

    cout<<"Perimetr = "<< P << endl;
    cout<<"Yuzasi = "<< S << endl;

    return 0;
}
