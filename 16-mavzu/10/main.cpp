#include <iostream>

using namespace std;

int main()
{
    float n, sum=0;
    cout<<"n = "; cin>>n;

    for(float i=1; i<=n; i++){
        sum += i/n;
        cout<<"Summa = "<< sum << endl;
    }
    return 0;
}
