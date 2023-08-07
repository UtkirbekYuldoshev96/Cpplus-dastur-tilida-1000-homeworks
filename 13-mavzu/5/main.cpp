#include <iostream>

using namespace std;

int main()
{
    float a,b;
    int n;
    cout<<"Qo'shish = 1, Ayirish = 2, Kopaytirish = 3, Bo'lish = 4\n";
    cin>>n;
    cout<<"a son = "; cin>>a;
    cout<<"b son = "; cin>>b;
    switch(n){
    case 1:
        cout<<"a + b = "<< a+b;
        break;
    case 2:
        cout<<"a - b = "<<a-b;
        break;
    case 3:
        cout<<"a * b = "<<a*b;
        break;
    case 4:
        cout<<"a / b = "<<  a/b;
        break;
    default:
        cout<<"Biz boshqa ammallar qo'shilmadi";
    }
    return 0;
}
