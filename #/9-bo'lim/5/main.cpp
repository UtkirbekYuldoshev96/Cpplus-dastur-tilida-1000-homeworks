#include <iostream>

using namespace std;

int main()
{
    int a,b;
    bool x;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;

    x = (a>=0 || b<-2);
    cout<<"Jumalani tekshiramiz = "<< x << endl;
    return 0;
}
