#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x, y;
    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;

    //cout<<"Natija = "<<sin(pow(x,2)) + cos(pow(x,2))<<endl;
   // cout<<"Natija = "<< 1+(pow(x,2)/3+(pow(x,2)/5))<< endl;
   cout<<"Natija = "<<sin(x+y)+exp(x) / cos(x)+cos(y)<< endl;
    return 0;
}
