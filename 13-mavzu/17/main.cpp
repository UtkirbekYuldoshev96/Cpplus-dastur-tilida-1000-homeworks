#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Berilgan son kiriting: "; cin>>a;

    switch(a / 10){
        case 1: cout<<"O'n "; break;
        case 2: cout<<"Yigirma "; break;
        case 3: cout<<"O'ttiz "; break;
        case 4: cout<<"Qirq "; break;
        case 5: cout<<"Ellik "; break;
        case 6: cout<<"Oltmish "; break;
        case 7: cout<<"Yetmish "; break;
        case 8: cout<<"Sakson "; break;
        case 9: cout<<"To'qson "; break;
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
    cout<<"masala";
    return 0;
}
