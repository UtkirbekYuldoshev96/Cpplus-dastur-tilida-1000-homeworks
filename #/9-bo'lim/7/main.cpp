#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    bool x;

    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;
    x = (a<b && b<c) || (c<b && b<a);
    cout<<"Jumlani qiymati = "<< x << endl;
    return 0;
}
