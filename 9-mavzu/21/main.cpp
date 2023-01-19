#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    int n;
    bool k;

    cout<<"n son = "; cin>>n;

    a = n/100%10;
    b = n/10%10;
    c = n%10;

    k = (a>b&&b>c) || (b>c&&c>a) || (c>a&&a>b);
    cout<<"Rostlikni tekshirib ko'ring = "<< k << endl;

    return 0;
}
