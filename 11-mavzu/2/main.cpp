#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"N son kiriting: "; cin>>n;

    if(n>0){
        cout<< n+1 << endl;
    }else if(n<0){
        cout<< n - 2 << endl;
    }
    return 0;
}
