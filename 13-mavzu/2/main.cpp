#include <iostream>

using namespace std;

int main()
{
    int k;
    cout<<"Bahoyizgizni kiriting:";
    cin>>k;

    switch(k){
        case 1: cout<<"Yomon"; break;
        case 2: cout<<"Qoniqarsiz"; break;
        case 3: cout<<"Qoniqarli"; break;
        case 4: cout<<"Yaxshi"; break;
        case 5: cout<<"A'lo"; break;
        default: cout<<"Xato";
    }
    return 0;
}
