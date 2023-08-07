#include <iostream>

using namespace std;

int main()
{
    float a;
    int n;
    cout<<"Og'irlik kiriting:"; cin>>a;
    cout<<"Og'irlikni tanlang";
    cout<<"kg-1, milligram-2, gramm-3, tonna-4, sentr-5\n";
    cin>>n;

    switch(n){
    case 1: cout<<a <<"kg"; break;
    case 2: cout<<a/1000000<<"kg"; break;
    case 3: cout<< a/1000<<"kg"; break;
    case 4: cout<<a*1000<<"kg"; break;
    case 5: cout<<a*100<<"kg"; break;
    default: cout<<"Siz Og'irlik ulchamlaridan foydalanmadingiz!";
    }

    return 0;
}
