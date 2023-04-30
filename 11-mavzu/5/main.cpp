#include <iostream>

using namespace std;

int main()
{
    int a,b,c, son_plus = 0, son_manfiy=0;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;

    if(a>0){        son_plus++;}
    if(b>0){        son_plus++;}
    if(c>0){        son_plus++;}

    if(a<0){        son_manfiy++;}
    if(b<0){        son_manfiy++;}
    if(c<0){        son_manfiy++;}

    cout<<"Shu sonlar orasida musbat va manfiy son aniqlaymiz!"<<endl;
    cout<<"Musbat sonlar soni = "<< son_plus<<endl;
    cout<<"Manfiy sonlar soni = "<< son_manfiy<<endl;
    return 0;
}
