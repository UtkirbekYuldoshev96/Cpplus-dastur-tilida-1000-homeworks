#include <iostream>

using namespace std;

int main()
{
    int n , s , m;
    cout<<"yuzlar xonasidagi son kiriting: "; cin>>n;

    s = (n/10)%10;
    m = (n/100)%10;
    n = (n%10)%10;

    cout<<"yuzlar xonasidagi birlik son bu "<< n <<endl;
    cout<<"yuzlar xonasidagi o'nlik son bu "<< s <<endl;
    cout<<"yuzlar xonasidagi yuzlik son bu "<< m <<endl;
    cout<<"Raqamlar yig'indisi "<< m + s + n <<endl;
    return 0;
}
