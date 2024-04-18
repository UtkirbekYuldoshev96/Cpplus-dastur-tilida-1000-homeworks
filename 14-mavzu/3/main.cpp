#include <iostream>

using namespace std;

int main()
{
    int n, a,b;
    son_sana:

    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    if(a<b){
        for(int i = a; i<=b; i++){
            cout<<"A sondan boshlab "<< i << " B sonigacha bo'lgan sonlar;"<<endl;
        }
    }else{
        cout<<"Berilgan qiymay qayta kiriting\n";
        goto son_sana;
    }
    return 0;
}
