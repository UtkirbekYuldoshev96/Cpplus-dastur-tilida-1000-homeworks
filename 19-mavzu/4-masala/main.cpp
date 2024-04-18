#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, K =1;
    cout<<"n = "; cin>>n;

    while(n > K){
        K *= 3;
    }
    if(n == K){
        cout<<"3 darajasi"<<endl;
    }else{
        cout<<"3 ning darajasi emas"<<endl;
    }
    return 0;
}
