#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"x = "; cin>>x;
    if(x>0 || x<1000){

        if(x%2 == 1){
            cout<<"toq sonlar";
        }else{
            cout<<"juft son";
        }
    }
    return 0;
}
