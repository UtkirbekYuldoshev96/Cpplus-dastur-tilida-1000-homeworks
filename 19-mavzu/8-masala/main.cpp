#include <iostream>

using namespace std;

int main()
{
    int n, s = 1;
    cout<<"n son = "; cin>>n;

    while(s * s <= n){
        s++;
    }

    s--;
    cout<<"summa = "<< s << endl;
    return 0;
}
