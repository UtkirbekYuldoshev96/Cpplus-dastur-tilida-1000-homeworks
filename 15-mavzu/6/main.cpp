#include <iostream>

using namespace std;

int main()
{
    int n;
    int x;
    cout<<" n son kiriting: "; cin>>n;

    for(int i=1; i<=n; i++){
        if(n%i == 0){
            cout<<"Tub son "<< i << endl;
        }else{
            cout<<"Tub son emas \n";
        }
    }
    return 0;
}
