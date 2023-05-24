#include <iostream>

using namespace std;

int main()
{
    float n;
    cout<<"1 kg maxsulot summasi kiritng: "; cin>>n;
    for(float i=1; i<=10; i++){
        cout<<i/10 <<" kg summa =  "<< i*n/10 << endl;
    }
    return 0;
}
