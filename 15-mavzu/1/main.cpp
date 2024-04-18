#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"N = "; cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            cout<<"sonning bo'luvchilari = "<<i<<endl;
        }
    }
    return 0;
}
