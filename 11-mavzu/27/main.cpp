#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"x = "; cin>>x;

    if(x<0){
        cout << 0 << endl;
    }else if(0.1 < x && 32.3> x){
        cout<<"natija = "<< 1 << endl;
    }else{
        cout<<"natija = "<< -1<<endl;
    }
    return 0;
}
