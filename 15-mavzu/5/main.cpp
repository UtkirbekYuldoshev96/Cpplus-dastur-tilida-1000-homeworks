#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"N son kiriting: "; cin>>n;

    for(int i=1; i<=n; i++){
        if(i%2 ==1 && i%5 !=0){
            cout<<"sonlar = "<< i << endl;
        }
    }
    return 0;
}
