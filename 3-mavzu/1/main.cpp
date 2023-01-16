#include <iostream>
#include <cmath>
using namespace std;
void Hajm(int a){
    int V;
    V = pow(a,3);
    cout<<"Hamj ="<<V<<endl;
}

void Yuza(int a){
    int S;
    S= 6*pow(a,2);
    cout<<"Yuza = S("<<S<<")\n";
}
int main()
{
    int a;
    cout<<"a son kiriting: "; cin>>a;
    Hajm(a);
    Yuza(a);
    return 0;
}
