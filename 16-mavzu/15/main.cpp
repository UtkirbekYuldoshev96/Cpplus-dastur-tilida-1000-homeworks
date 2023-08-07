#include <iostream>
using namespace std;

void task(){
    float n, a, sum=1;
    cout<<"n son = "; cin>>n;
    cout<<"a son = "; cin>>a;
    for(float i=1; i<=n; i++){
            sum *=a;
        cout<<a<<"^"<<n<<"="<<sum<< endl;
    }
}

int main()
{
    task();
    return 0;
}
