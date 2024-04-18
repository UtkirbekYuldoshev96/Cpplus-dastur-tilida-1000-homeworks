#include <iostream>
#include <math.h>
using namespace std;
const double PI = 3.14;
int main()
{
    double L , S , R;
    cout<<"Doiraning uzligini kiriting L = : "; cin>>L;
     R = L / (2*PI);
     S = PI * pow(R,2);

     cout<<"Doiraning radusi R ="<< R << endl;
     cout<<"Doiraning yuzasi S ="<< S << endl;

    return 0;
}
