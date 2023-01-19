#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    int n, sum;
    bool k;

    cout<<"n son = "; cin>>n;
    a = n/100%10;
    b = n/10%10;
    c = n%10;

    k = (a == c);
    cout<<"Rostlikni tekshiring "<< k << endl;

    return 0;
}
