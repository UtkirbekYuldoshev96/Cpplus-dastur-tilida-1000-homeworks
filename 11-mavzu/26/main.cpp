#include <iostream>

using namespace std;

int main()
{
    int x,resalt;
    cout<<"x = "; cin>>x;
    if(x<=0){
        resalt = -x;
    }else if(0<x && x<2){
        resalt = x*x;
    }else{
        resalt = 4;
    }
    cout<<"Natija = "<< resalt << endl;
    return 0;
}
