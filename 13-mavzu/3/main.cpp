#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Oy raqamini kiriting:"; cin>>n;

    switch(n){
    case 1:
    case 2: cout<<"Qish"; break;
    case 3:
    case 4:
    case 5: cout<<"Bohor"; break;
    case 6:
    case 7:
    case 8: cout<<"Yoz"; break;
    case 9:
    case 10:
    case 11: cout<<"Kuz"; break;
    case 12: cout<<"Qish"; break;
    default: cout<<"bunday fasl yuq";


    }
    return 0;
}
