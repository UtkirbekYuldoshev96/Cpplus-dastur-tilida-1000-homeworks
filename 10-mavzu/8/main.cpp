#include <iostream>

using namespace std;

int main()
{
    double x,y;
    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;

    if(x<y || x==y){
        x =0;
        cout<<x<<endl;
    }else{
        cout<<y<<endl;
    }
    return 0;
}
