#include <iostream>

using namespace std;

int main()
{
    int x,a,b,s,number;
    cout<<"x = "; cin>>x;

    a = x%10; x/=10;
    b = x%10; x/=10;
    s = x%10; x/=10;

   number = a*100+b*10+s;
   cout<<"Teskarilangan son = "<< number << endl;
    return 0;
}
