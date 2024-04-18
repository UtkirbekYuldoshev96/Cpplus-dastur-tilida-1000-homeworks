#include <iostream>

using namespace std;
double const Pi = 3.14;
int main()
{
    double R, L, S;
    cout<<"Doiraning radusini kirting = "; cin>>R;

    L = 2 * Pi * R;
    S = Pi * (R * R);

    cout<<"Doiraning uzunligi  = "<< L << endl;
    cout<<"Doiraning yuzasi  = "<< S << endl;
    return 0;
}
