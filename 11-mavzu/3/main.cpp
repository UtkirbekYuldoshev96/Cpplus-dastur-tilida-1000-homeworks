#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"n son kiriting: "; cin>>n;

    if(n>0){
        cout<< ++n << endl;
    }else if(n == 0){
        cout<<"qoymat = "<< 10 << endl;
    }else{
        cout<< n-2 << endl;
    }
    return 0;
}
