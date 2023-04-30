#include <iostream>

using namespace std;

int main()
{
    int a,b,c, son = 0;

    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;

    if(a>0){
        son++;
    }
    if(b>0){
        son++;
    }
    if(c>0){
        son++;
    }

    cout<<"Shu sonlar orasida musbat sonlar soni = "<< son << endl;
    return 0;
}
