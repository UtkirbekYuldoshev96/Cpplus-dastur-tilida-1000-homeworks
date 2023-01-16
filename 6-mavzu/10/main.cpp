#include <iostream>

using namespace std;

int main()
{
    int n , s;
    cout<<"yuzlar xonasidagi son kiriting: "; cin>>n;
    s = (n/10)%10;
    n = (n%10)%10;
    cout<<"yuzlar xonasidagi o'nlik son bu "<< s <<endl;
    cout<<"yuzlar xonasidagi birlik son bu "<< n <<endl;
    return 0;
}
