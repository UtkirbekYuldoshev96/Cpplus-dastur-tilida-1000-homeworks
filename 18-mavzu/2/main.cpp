#include <iostream>
#include <cmath>
#include <stdlib.h> // rand - funksiyadan foydalanish uchun
#include <time.h>
using namespace std;

// kompyuter o'ylagan soni topish function
 void Randommer(){
    float x;
    float y=0, u=0;

    srand(time(NULL));
    x = rand()%1000 + 1;

    while(x !=y){
        cin>>y;
        u++;
        if(x>y){
            cout<<"Kompyuter o'ylagan son katta \n";
        }else if(x <y){
            cout<<"Kompyuter o'ylagan son kichik \n";
        }
    }
    cout<<"Qoyin topdingiz!\n";
    cout<<"Urinishlar son = "<<u<<endl;
 }

int main()
{
    cout<<"kompyuter o'ylagan sonni toping! = ";
    Randommer();

    return 0;
}
