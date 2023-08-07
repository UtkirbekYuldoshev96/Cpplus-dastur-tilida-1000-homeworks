#include <iostream>

using namespace std;

int main()
{
    float a;
    int n;
    cout<<"destimetr = 1, kilometr = 2, metr = 3, millimetr = 4, santemetr = 5\n";
    cin>>n;
    cout<<"a son = "; cin>>a;
    switch(n){
    case 1:
        cout<<"destimetr = "<<a/10;
        break;
    case 2:
        cout<<"kilometr = "<<a/1000;
        break;
    case 3:
        cout<<"metr = "<<a/100;
        break;
    case 4:
        cout<<"millimetr = "<<a/10000;
        break;
    case 5:
        cout<<"santemetr = " <<a/100;
    default:
        cout<<"Biz boshqa ammallar qo'shilmadi";
    }
    return 0;
}
