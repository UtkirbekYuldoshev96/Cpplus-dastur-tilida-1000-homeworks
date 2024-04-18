#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"To'g'ilgan yilingizni kiriting: ";
    cin>>a; a -= 1984; a%=60;

    switch(a / 12){
        case 0: cout<<"yashil "; break;
        case 1: cout<<"qizil "; break;
        case 2: cout<<"sariq "; break;
        case 3: cout<<"oq "; break;
        case 4: cout<<"qora "; break;
    }

    switch(a % 12){
        case 0: cout<<"sichqon ";break;
        case 1: cout<<"sigir ";break;
        case 2: cout<<"yo'lbars ";break;
        case 3: cout<<"quyon ";break;
        case 4: cout<<"ajdar ";break;
        case 5: cout<<"ilon ";break;
        case 6: cout<<"ot ";break;
        case 7: cout<<"qo'y ";break;
        case 8: cout<<"maymun ";break;
        case 9: cout<<"tovuq ";break;
        case 10: cout<<"it ";break;
        case 11: cout<<"to'ng'iz ";break;
    }
    return 0;
}
