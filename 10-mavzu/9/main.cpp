#include <iostream>

using namespace std;

int main()
{
    double x,y,z;
    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;
    cout<<"z = "; cin>>z;

    if(x<3 && x>1 ||  || ){
        cout<<"1 - 3 sonlar orasida sonlar"<<x<<endl;

    }else if(y<3 && y>1){
        cout<<"1 - 3 sonlar orasida sonlar"<<y<<endl;

    }else if(z<3 && z>1){
        cout<<"1 - 3 sonlar orasida sonlar"<<z<<endl;
    }else{
        cout<<"1 - 3 son orasidagi sonlar kiritilmadi uzur!"<<endl;
    }
    return 0;
}
