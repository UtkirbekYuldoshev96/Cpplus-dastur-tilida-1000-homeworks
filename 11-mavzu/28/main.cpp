#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"x="; cin>>x;
    if(x%400 == 0 || (x%4 ==0 && x%100 !=0)){
        cout<<"kabisa yili"<<endl;
    }else{
        cout<<"Kabisa yili emas"<<endl;
    }
    return 0;
}
