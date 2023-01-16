#include <iostream>

using namespace std;

int main()
{
    int n;
    int a, b , resalt;
    cout<<"n ga son kiriitng: ";cin>>n;
    a = (n/100)%10;
    b = (n/10)%10;
    n = (n%10)%10;

    swap(b,n);
    resalt = a *100 + b * 10 +n;
    cout<<"yuz = "<< a <<endl;
    cout<<"o'n = "<< b <<endl;
    cout<<"bir = "<< n <<endl;
    cout<<"natijas = "<< resalt <<endl;
    return 0;
}
