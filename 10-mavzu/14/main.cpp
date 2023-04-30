#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int a,b,c, gisht, gisht_ulchami;

    cout<<"G'ishtning A o'lchami = "; cin>>a;
    cout<<"G'ishtning B o'lchami = "; cin>>b;
    cout<<"G'ishtning C o'lchami = "; cin>>c;

    cout<<"x o'lcham = "; cin>>x;
    cout<<"y o'lcham = "; cin>>y;
    gisht = x * y;
    gisht_ulchami = a * b *c;
    if(gisht == gisht_ulchami){
        cout<<"Devorimiz bitadi!";
    }else{
        cout<<"Loyihamiz tugallanmagi";
        cout<<" Tugallanish uchun g'ish kerak!"<< endl;
    }
    return 0;
}
