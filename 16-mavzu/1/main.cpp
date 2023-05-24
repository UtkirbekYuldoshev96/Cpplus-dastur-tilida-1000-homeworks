#include <iostream>
using namespace std;

void Mycode(){
    int n;
    cout<<"n son kiriting: "; cin>>n;
    for(int i=1; i<=n; i++){
        if(n>0){
            cout<<"k["<<i <<"]"<< endl;
        }
    }
}

int main()
{
    int n;
    int k;
    cout<<"n = "; cin>>n;
    cout<<"k = "; cin>>k;

    for(int i=0; i<=n; i++){
        cout<<"k = "<< k << endl;
    }
    return 0;
}
