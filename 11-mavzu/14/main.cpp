#include <iostream>
using namespace std;
int main(){
    int a,b,c, num1,num2;

    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;
    // kichik sondi topib olamiz
    if(a>b){
        num1 = b;
    }else{
        num1 = a;
    }
    if(num1 > c){
        num1 = c;
    }
    // katta sondi topib olamiz
    if(a>b){
        num2 = a;
    }else{
        num2 = b;
    }
    if(num2 < c){
        num2 = c;
    }

    cout<<"Kichigi = "<< num1 << endl;
    cout<<"Kattasi = "<< num2 << endl;
    return 0;
}
