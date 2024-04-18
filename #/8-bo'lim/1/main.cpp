#include <iostream>

using namespace std;

int main()
{
    bool A=true, B=false, C=true, D=false;
    bool N;

    N = ((A && B)||(C && D) || (A || B));
    cout<<"Natija = "<< N << endl;
    return 0;
}
