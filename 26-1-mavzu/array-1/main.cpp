#include <iostream>

using namespace std;

int main()
{
//    statik massiv hosil qilish
    int arr[10];
    int n;

    cout<<"n = "; cin>>n;

// massivga dastlabki n toq sonni yozib olamiz.
    for(int i = 0; i <= n; i++){
        arr[i] =2 * i + 1;
    }

//
    for(int i = 0; i <= n; i++){
        cout<<arr[i] << " ";
    }
    return 0;
}
