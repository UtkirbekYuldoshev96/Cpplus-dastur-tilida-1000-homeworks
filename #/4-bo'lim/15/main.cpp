#include <iostream>
#include <math.h>
using namespace std;
const double PI = 3.14;
int main()
{
   double L, R, S;
   cout<<"Doira yuzi kiriting S= "; cin>>S;

   R = sqrt(S / PI);
   L = 2*PI*R;
   cout<<"Doiraning radusi R = "<< R << endl;
   cout<<"Aylaning uzunligi L = "<< L << endl;


    return 0;
}
