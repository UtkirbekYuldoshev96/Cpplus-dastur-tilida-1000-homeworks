#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout<<"Robotni yo'nalishini raqam bilan belgilang";
    cout<<"1.shimol\n 2.janub";
    cin>>n;

    switch(n){
    case 0:
        cout<<"harakat davom ettir";
        break;
    case 1:
        cout<<"chapga burl";
    }
    return 0;
}
