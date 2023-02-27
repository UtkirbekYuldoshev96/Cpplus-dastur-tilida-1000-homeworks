#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x,y,z;
    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;
    cout<<"z = "; cin>>z;

    if(x>0 && y>0 && z>0){
        cout<<"x^2 = "<<pow(x,2)<<endl;
        cout<<"y^2 = "<<pow(y,2)<<endl;
        cout<<"z^2 = "<<pow(z,2)<<endl;
    }else{
        cout<<"kiritilgan sonlar biri noldan kichik"<<endl;
    }

    return 0;
}
