#include <iostream>
#include <cmath>
using namespace std;

void function_data(){
        float n;
    data:

    cout<<"natural son kiriting: "; cin>>n;
    if((ceil(n) != n) || (n <= 0)){
        goto data;
    }
    cout<<"Natural son kiritildi "<<endl;

}

int main()
{
    int n;
    son:

    cout<<"1-5 son kiritishingiz kerak "; cin>>n;
    if(n<=0 || n>5){
        goto son;
    }
    cout<<"Sizning sonlarin tasdiqlandi"<<endl;
    return 0;
}
