#include <iostream>

using namespace std;

int main()
{
    int n, s = 0;
    cout<<"n = "; cin>>n;

    while(n > 1 ){
        s++;
        n /= 3;
    }

    cout<<"Summa = "<< s << endl;
    return 0;
}
