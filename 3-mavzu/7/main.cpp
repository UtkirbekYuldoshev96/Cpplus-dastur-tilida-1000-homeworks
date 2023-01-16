#include <iostream>
#include <cmath>
using namespace std;

void HaqiqiySon(float x, float y){
    float X;

    X = fabs(x)-fabs(y)/ 1+ fabs(x*y);
    cout<<"X="<< X<<endl;
}
int main()
{
    float x, y;
    cout<<" x qiymat = "; cin>>x;
    cout<<" y qiymat = "; cin>>y;
    HaqiqiySon(x,y);
    return 0;
}
