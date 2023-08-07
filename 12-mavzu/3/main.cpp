#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Yil fasli kiriting:";
    cin>>n;
    switch(n){
    case 1:
        cout<<"Dekabr \n";
        cout<<"Yanvar \n";
        cout<<"Fevral \n"; break;
    case 2:
        cout<<"Mart \n";
        cout<<"Aprel \n";
        cout<<"May \n"; break;
    case 3:
        cout<<"Iyun \n";
        cout<<"Iyul \n";
        cout<<"Avgust \n"; break;
    case 4:
        cout<<"Sentabr \n";
        cout<<"Oktabr \n";
        cout<<"Noyabr \n"; break;
    default:
        cout<<"Yilda 4 ta fasl bor";
    }
    return 0;
}
