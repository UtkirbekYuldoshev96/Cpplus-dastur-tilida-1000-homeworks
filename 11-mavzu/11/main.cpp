#include <iostream>

using namespace std;

void main_data(){
    int a,b;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;

    if(a != b){
        if(a>b){
            cout<<"a="<< a <<endl;
        }else{
            cout<<"b="<<b<< endl;
        }
    }
    if(a==b){
        cout<<"nolga teng = "<< 0 << " a="<<a<<" b="<<b<< endl;
    }
}

int main()
{
    // bu yerda masalaga yechim berilgan
    int a,b;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;

    if(a>b){
        b = a;
    }else if(b>a){
        a = b;
    }else{
        a = 0;
        b = 0;
    }
    cout<<"a = "<< a << " "<<"b="<<b<<endl;
    return 0;
}
