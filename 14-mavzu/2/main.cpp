#include <iostream>

using namespace std;

int main()
{
    int n;
    qayta_sura:

    cout<<"hafta kuni kiriting "; cin>>n;
    if(n>0 && n>7){
        goto qayta_sura;
    }
    cout<<"Sizning hafta kunigiz bor!";
    return 0;
}
