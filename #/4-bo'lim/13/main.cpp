#include <iostream>
#include <math.h>

const double PI = 3.14;
using namespace std;

int main()
{
    double R1,R2;
    double S1, S2, S3;

    cout<< "R1 = "; cin>>R1;
    cout<< "R2 = "; cin>>R2;



    S1 = PI * R1;
    S2 = PI * R2;
    S3 = PI * (R1-R2);

    cout<<"S1 ="<< S1 << endl;
    cout<<"S2 ="<< S2 << endl;
    cout<<"S3 ="<< S3 << endl;
    return 0;
}
