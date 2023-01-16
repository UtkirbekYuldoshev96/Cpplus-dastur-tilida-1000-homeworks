#include <iostream>

using namespace std;

int main()
{
    int n,s;
    cout<<"n son kiriting: "; cin>>n;

    s = n % 10;
    n = n / 10;
    cout<<"O'nlik son "<< n<<" Birlik son "<<s<<endl;
    swap(n,s);
    cout<<"O'nlik son "<< n<<" Birlik son "<<s<<endl;
    cout<<"Raqamlar yig'indisi "<< n + s<<endl;
    return 0;
}
