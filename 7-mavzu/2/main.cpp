#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long double n, x, m; // 8 + 2 =  bayt
    cout<<"x son = "; cin>>x;
    n = x * 3.14 / 180;
    m = sqrt(sin(n)*x + sqrt(cos(n)*x));
    cout<<"hisoblash "<< m << endl;
    return 0;
}
