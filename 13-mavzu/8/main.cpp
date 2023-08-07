#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"kun "; cin>>n;
    cout<<"oy "; cin>>m;
    cout<<n;
    switch(m){
        case 1: cout << "-Yanvar";break;
        case 2 : cout << "-Fevral";break;
        case 3 : cout << "-Mart";break;
        case 4 : cout << "-Aprel";break;
        case 5 : cout << "-May";break;
        case 6 : cout << "-Iyun";break;
        case 7 : cout << "-Iyul";break;
        case 8 : cout << "-Avgust";break;
        case 9 : cout << "-Sentabr";break;
        case 10 : cout << "-Oktabr";break;
        case 11 : cout << "-Noyabr";break;
        case 12 : cout << "-Dekabr";break;
    }
    return 0;
}
