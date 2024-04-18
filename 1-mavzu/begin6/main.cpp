#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    double V, S;

    cout<<"paralelepidning tomoni kiritin a = "; cin>>a;
    cout<<"paralelepidning tomoni kiritin b = "; cin>>b;
    cout<<"paralelepidning tomoni kiritin c = "; cin>>c;

    V = a * b *c;
    S = 2 * (a*b + b*c+ c*a);

    cout<<"Uning hajm =  "<< V << endl;
    cout<<"To'la sirtdi  =  "<< S << endl;

    return 0;
}
