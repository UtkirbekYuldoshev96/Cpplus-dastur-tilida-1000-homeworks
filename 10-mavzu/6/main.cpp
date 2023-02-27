#include <iostream>

using namespace std;

int main()
{
    double x,y;
    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;

    if(x>y){
        cout<<"Z = "<< x - y << endl;
    }else{
        cout<<"Z = "<< y-x+1 << endl;
    }
    return 0;
}
