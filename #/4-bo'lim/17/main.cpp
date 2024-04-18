#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    int ac, bc;
    cout<<"A nuqtaga son kiriting: = "; cin>>a;
    cout<<"B nuqtaga son kiriting: = "; cin>>b;
    cout<<"C nuqtaga son kiriting: = "; cin>>c;

    ac = abs(a-c);
    bc = abs(b-c);
    cout<<"|AC| = "<< ac << endl;
    cout<<"|BC| = "<< bc << endl;
    cout<<"|AC| + |BC| = " << ac + bc << endl;




    return 0;
}
