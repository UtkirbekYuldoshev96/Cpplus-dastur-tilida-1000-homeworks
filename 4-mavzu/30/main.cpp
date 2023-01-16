#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
float PI = 3.14;
void Radian(){
    float x;
    float rad;
    cout << "radian kiritng: "; cin>>rad;
    x = rad * 180 / M_PI;
    cout<<" gradus = "<<x <<endl;
}

int main()
{
    Radian();
    return 0;
}
