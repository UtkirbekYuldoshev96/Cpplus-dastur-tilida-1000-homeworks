#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cout<<"1-yanvar kuni kiriting: "; cin>>n;
    cout<<"k = "; cin>>k;

    cout<<"yilning "<<k<<" - chi kuni "<<(k+n)%7+1<<endl;
    return 0;
}
