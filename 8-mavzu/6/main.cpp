#include <iostream>

using namespace std;

int main()
{
    int n,m;
    bool k;
    cout<<"n son kiriting: "; cin>>n;
    cout<<"m son kiriting: "; cin>>m;

    k = (((n%2 == 0)||(n%2 == 1)) && ((m%2 == 0)||(m%2 == 1)));
    cout<<"==== true = 1 ==== false = 0 ===="<<endl;
    cout<<"natija = "<< k << endl;
    return 0;
}
