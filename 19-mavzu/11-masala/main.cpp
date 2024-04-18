#include <iostream>
using namespace std;
int main()
{
    int n, k = 0;
    int power = 0;
    cout<<"n son =  "; cin>>n;

    while(n > power){
        k++;
        power += n;
    }

    cout<<"Summa = "<< k << endl;
    cout<<"eng kichik son = "<< power << endl;
    return 0;
}
