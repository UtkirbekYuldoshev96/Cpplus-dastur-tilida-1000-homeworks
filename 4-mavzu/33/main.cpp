#include <iostream>

using namespace std;

int main()
{
    int x; // kg maxsulot
    int s; // summasi

    cout<<"Maxsulotni kg kirintg: "; cin>>x;
    cout<<"Maxsulotni summani kirintg: "; cin>>s;

    s *= x;
    cout<<"Maxsulot narxi ="<<s<<endl;
    cout<<"kg (mi) ="<<x<<endl;

    return 0;
}
