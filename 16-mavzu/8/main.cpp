#include <iostream>

using namespace std;

int main()
{
    int a,b, sum = 1;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;

    for(int i=a; i<=b; i++){
        cout<<"Ko'payitmasi = ";
        sum *= i;
        cout<<sum<< endl;
    }

    cout<<"Ko'paytma qiymati = "<< sum << endl;

    return 0;
}
