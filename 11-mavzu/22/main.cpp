#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;
    if(x>0 && y>0){ cout<<"1-chorak";}
    if(x<0 && y>0){ cout<<"2-chorak";}
    if(x<0 && y<0){ cout<<"3-chorak";}
    if(x>0 && y<0){ cout<<"4-chorak";}
    return 0;
}
