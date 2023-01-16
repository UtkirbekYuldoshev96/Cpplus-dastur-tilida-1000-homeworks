#include <iostream>
#include <cmath>
using namespace std;

void Gepo(int a, int b){
    int c;
    c=sqrt(pow(a,2)+pow(b,2));
    cout<<"gepotezunasi="<<c<<endl;
}

void yuza(int a, int b){
    int S;
    S = a*b/2;
    cout<<"Gepotenuza yuza="<<S<<endl;
}

void Arif(int a, int b){
    int A,G;
    A=a+b/2;
    G=sqrt(a*b);

    cout<<"Arifmetika = "<<A<<endl;
    cout<<"Geometriya = "<<G<<endl;
}
int main()
{
    int a,b;
    cout<<"a son kiriting: "; cin>>a;
    cout<<"b son kiriting: "; cin>>b;
    Gepo(a,b);
    yuza(a,b);
    Arif(a,b);
    return 0;
}
