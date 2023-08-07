#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"x = "; cin>>x;
    if(x < -2 || x > 2){
        cout<<"x = "<< 2 * x << endl;
    }else{
        cout<<"x = "<< -3*x << endl;
    }
    return 0;
}
