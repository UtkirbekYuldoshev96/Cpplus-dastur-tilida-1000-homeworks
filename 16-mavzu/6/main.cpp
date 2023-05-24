#include <iostream>
using namespace std;
int main()
{
    float n, k;
    cout<<"1 kg konfet narxi = "; cin>>n;
    cout<<"kg konfet massasi = "; cin>>k;
    for(float i=0.1; i <=k; i+=0.1){
        cout<<i<<"= "<< i*n<<" so'm \n";
    }
    return 0;
}
