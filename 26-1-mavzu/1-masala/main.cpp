#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Massiv index soni kiriting:"; cin>>n;
    int arr[10];

    for(int i = 1; i <=n; i++){
        cout<<"index: ";
        cin>>arr[i];
    }

    for(int i = 0; i <= n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}

