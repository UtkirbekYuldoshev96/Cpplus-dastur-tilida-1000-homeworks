#include <iostream>

using namespace std;

int main()
{
    int n;
    int a,b,c;
    bool k;
    cout<<"son kiriting: "; cin>>n;

    a = n/100; // yuzlik
    b = n/10%10; // o'nlik
    c = n%10; // birlik

    k = (a != b && b != c && c != a);
    cout<<"rostlikni tekshiring "<< k << endl;
    return 0;
}
