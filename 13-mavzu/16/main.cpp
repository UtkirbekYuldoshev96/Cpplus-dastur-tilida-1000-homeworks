#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<< "Berilgan yosh kiriting = ";
    cin>>a;

    switch(a / 10){
        case 2: cout<<"yigirma "; break;
        case 3: cout<<"uttiz "; break;
        case 4: cout<<"qirq "; break;
        case 5: cout<<"ellik "; break;
        case 6: cout<<"oltmish "; break;
    }

    switch(a % 10){
        case 1: cout<<"bir "; break;
        case 2: cout<<"ikki "; break;
        case 3: cout<<"uch "; break;
        case 4: cout<<"to'rt "; break;
        case 5: cout<<"besh "; break;
        case 6: cout<<"olti "; break;
        case 7: cout<<"yetti "; break;
        case 8: cout<<"sakkiz "; break;
        case 9: cout<<"to'qiz "; break;
    }

    cout<<"yosh";

    return 0;
}
