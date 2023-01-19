#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    bool k;
    cout<<"a son = "; cin>>a;
    cout<<"b son = "; cin>>b;
    cout<<"c son = "; cin>>c;
    k = ((a>0) && (b>0) && (c>0));
    cout<<"A va B va C son musbat son = "<< k << endl;
    return 0;
}
