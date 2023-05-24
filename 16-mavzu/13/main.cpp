#include <iostream>

using namespace std;

int main()
{
    float n, sum =1, x=1.1;
    cout<<"n= "; cin>>n;
    for(float i = 1; i<=n; i++){
        sum -= x;
        x += 0.1;
        cout<<"Summa = "<<sum << endl;
    }
    return 0;
}
