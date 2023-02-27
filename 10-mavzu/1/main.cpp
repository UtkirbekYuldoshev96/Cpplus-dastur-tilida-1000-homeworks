#include <iostream>

using namespace std;

int main()
{
    double x,y;
    double max, min;
    cout<<"x = "; cin>> x;
    cout<<"y = "; cin>> y;

    max = (x>y) ? x : y;
    min = (x<y) ? x : y;

    cout<<"max = " << max << endl;
    cout<<"min = " << min << endl;


    return 0;
}
