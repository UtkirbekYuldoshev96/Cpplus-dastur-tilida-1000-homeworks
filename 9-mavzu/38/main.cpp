#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    bool resalt;

    cout<<"x1 = "; cin>>x1;
    cout<<"x2 = "; cin>>x2;
    cout<<"y1 = "; cin>>y1;
    cout<<"y2 = "; cin>>y2;

    resalt =( abs(x1 - x2) == abs(y1 - y2));
    cout<<"Rostlikni tekshiring = "<< resalt <<endl;
    return 0;
}
