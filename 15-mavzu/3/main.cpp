#include <iostream>

using namespace std;

int main()
{
    int n, s=0;
    cout<<"N = "; cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            s+=i;
        }
    }
    cout<<"Summa = "<< s << endl;
    if(s!=n){
        cout<<"mukkamal son emas \n";
    }else{
        cout<<"mukkamal son \n";
    }
    return 0;
}
