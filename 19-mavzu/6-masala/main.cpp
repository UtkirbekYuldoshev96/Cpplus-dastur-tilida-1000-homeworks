#include <iostream>

using namespace std;

int main()
{
    int n, s = 1;
    cout<<"n son = "; cin>>n;

    while( n >= 2){
        s *= n;
        n -= 2;
    }

    cout<<"n!! = "<< s << endl;
    return 0;
}
