#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cout<<"x = "; cin>>x;

    if(x>0){
        cout<<"Natija = "<< 2 * sin(x) << endl;
    }else{
        cout<<"Natija = "<<x-6 << endl;
    }

    return 0;
}
