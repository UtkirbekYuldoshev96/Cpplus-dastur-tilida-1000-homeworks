#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    int ac, bc;
    cout<<"A nuqtaga son kiriting: = "; cin>>a;
    cout<<"B nuqtaga son kiriting: = "; cin>>b;
    cout<<"C nuqta  A va B nuqtalar orasida : = "; cin>>c;

    ac = abs(a-c);
    bc = abs(b-c);
    cout<<"|AC| * |BC| = "<<ac * bc << endl;

    return 0;
}
