#include <iostream>

using namespace std;

int main()
{
    double x,y;
    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;

    if(x>y){
        cout<<"y = "<< x * y / 2<<endl;
    }else{
        cout<<"y = "<< x + y / 2<<endl;
    }

    return 0;
}
