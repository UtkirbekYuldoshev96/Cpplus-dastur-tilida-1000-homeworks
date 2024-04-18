#include <iostream>

using namespace std;

int main()
{
    int n, k = 0;
    cout<< "n = "; cin>>n;

    while(n > 1){
        if(int(n / 2) * 2 != n){
            cout<<"Berilgan son 2 ning darajasi emas!"<<endl;
            return 0;
        }
        k++;
        n/=2;
    }

    cout<<"Berilgan son 2 ning "<< k << " - darajasi"<<endl;
    return 0;
}
