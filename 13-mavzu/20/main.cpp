#include <iostream>

using namespace std;

// 10 mart islom
// 8 iyun karim
int main()
{
    int m;
    int d;
    cout<<"To'g'ilgan kuningizni kiriting: "; cin>>d;
    cout<<"To'g'ilgan oyingizni kiriting: "; cin>>m;

    switch(m){
    case 1:
        if(d < 20){
            cout<<"Echki ";
        }else{
            cout<<"Qovg'a ";
        }
        break;
    case 2:
        if(d < 19){
            cout<<"Qov'a ";
        }else{
            cout<<"Baliq ";
        }
        break;
    case 3:
        if(d < 21){
            cout<<"Baliq ";
        }else{
            cout<<"Qo'y ";
        }
        break;
    case 4:
        if(d < 20){
            cout<<"Qo'y ";
        }else{
            cout<<"Buzoq ";
        }
        break;
    case 5:
        if(d < 21){
            cout<<"Buzoq";
        }else{
            cout<<"Egizaklar ";
        }
        break;
    case 6:
        if(d < 22){
            cout<<"Egizaklar ";
        }else{
            cout<<"Qisqichbaqa ";
        }
        break;
    case 7:
        if(d < 23){
            cout<<"Qisqichbaqa ";
        }else{
            cout<<"Arislon ";
        }
        break;
    case 8:
        if(d < 23){
            cout<<"Arislon ";
        }else{
            cout<<"Parizod ";
        }
        break;
    case 9:
        if(d < 23){
            cout<<"Parizod ";
        }else{
            cout<<"Tarozi ";
        }
        break;
    case 10:
        if(d < 23){
            cout<<"Tarozi ";
        }else{
            cout<<"Chayon ";
        }
        break;

    case 11:
        if(d < 23){
            cout<<"Chayon ";
        }else{
            cout<<"O'qotar ";
        }
        break;
    case 12:
        if(d < 22){
            cout<<"O'qotar ";
        }else{
            cout<<"Echki ";
        }
    }
    cout<<" burj";

    return 0;
}
