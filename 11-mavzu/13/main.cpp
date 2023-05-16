#include <iostream>

using namespace std;

int main()
{
    int a,b,c,num;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;

    if((a>b && a < c) || (a > c && a < b)){
        cout<<"O'rtadagi sondi oladi (a) = "<< a << endl;
    }
    if((b>c && b < a) || (b>a && b < c)){
        cout<<"O'rtadigi sondi oladi (b) = "<< b << endl;
    }
    if((c>a && c < b) || (c > b && c < a)){
        cout<<"O'rtadagi sondi oladi (c) = "<< c << endl;
    }

    return 0;
}
