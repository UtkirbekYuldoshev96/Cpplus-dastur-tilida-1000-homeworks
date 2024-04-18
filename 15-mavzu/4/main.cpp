#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"N son kiriting : ";
    cin>>n;

    cout<<"Mukkammal sonlar: ";
    for(int i=1; i<=n; i++){
        int sum =0;
        for(int j=1; j<=i; j++){
            if(i%j == 0){
                sum+=j;
            }
        }
        if(sum == i){
            cout<< i <<" ";
        }
    }

    return 0;
}
