#include <iostream>

using namespace std;

void turt_xonaliSon(){
    int a,b,c,d, num;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;
    cout<<"d = "; cin>>d;

    if(a>b){
        num = b;
        cout<<b<<endl;
    }else{
        num = a;
        cout<<a<<endl;
    }

    if(num > c){
        num = c;
        cout<<c<<endl;
    }else{
        num = d;
        cout<<d<<endl;
    }

    cout<<"Natija = "<< num << endl;
}


int main_xulosa(){
    turt_xonaliSon();
    return 0;
}

int main()
{
    int a,b,c, min;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;

    if(a>b){
        min = b;
    }else{
        min = a;
    }
    if(min > c){
        min = c;
    }

    cout<<"Natija = "<< min << endl;

    return 0;
}
