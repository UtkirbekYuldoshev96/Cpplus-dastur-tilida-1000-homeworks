#include <iostream>

using namespace std;

void natural(int n){
    int i=0;
    int sum=0;
    while(n>0){
        sum=i;
        i++;
    }
    cout<<"yig'indi = "<<sum<<"\n";
}

int main()
{
    int x;
    cout<<" n son kiriting: "; cin>>x;
    natural(x);
    return 0;
}
