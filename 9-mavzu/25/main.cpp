#include <iostream>

using namespace std;

int main()
{
    double x,y;
    bool k;
    cout<<"x son : "; cin>>x;
    cout<<"y son : "; cin>>y;

    k = (x<0 && y>0);
    cout<<"Rostlikni tekshiring = "<< k << endl;
    return 0;
}
