#include <iostream>
#include <math.h>
using namespace std;

int main()
{
     double x1, x2, y1,y2;
     double S;

    cout<<"x1 nuqta kiriting: "; cin>>x1;
    cout<<"y1 nuqta kiriting: "; cin>>y1;

    cout<<"x2 nuqta kiriting: "; cin>>x2;
    cout<<"y2 nuqta kiriting: "; cin>>y2;
    S = sqrt( pow(x1-x2, 2) + pow(y1-y2,2) );
    cout<<"Ikki nuqta orasidagi masofa = "<< S << endl;

    return 0;
}
