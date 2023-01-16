#include <iostream>

using namespace std;

void Bulish(int n, int m){
    while(n>m){
        cout<<Bulish(n-1,m+1);
    }
}

int main()
{
    int x,y;
    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;

    Bulish(x,y);
    return 0;
}
