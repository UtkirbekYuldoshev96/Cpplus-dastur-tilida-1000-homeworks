#include <iostream>

using namespace std;

int main()
{
    int n;
    bool k;
    cout<<"ikki xona son kiriting: "; cin>>n;
    k = (n > 9 && n < 100) && ( n % 2 == 0);
    cout<<"Berilgan son: "<< k << endl;
    return 0;
}
