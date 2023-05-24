#include <iostream>
using namespace std;


void masala(){
     float n, sum = 1;
    cout<<"n = "; cin>>n;
    for(float i=1;i <=n; i++){
        sum *= n+i/10;
        cout<<"i = "<< n+i/10 <<"\t";
        cout<<"Summa = "<< sum << endl;
    }
}
int main()
{
    float n, kop =1, x=1.1;
    cout<<"n = "; cin>>n;
    for(float i=1; i<=n; i++){
        kop *= x;
        x +=0.1;
        cout<<"Summa = "<< kop << endl;
    }

    return 0;
}
