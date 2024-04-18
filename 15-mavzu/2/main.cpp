#include <iostream>

using namespace std;

int main()
{
    int n, s=0;
    cout<<"N = "; cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            cout<<"sonning bo'luvchilari = "<<i<<endl;
            s+=i;
        }
    }
    cout<<"Summa = "<< s << endl;
    return 0;
}
