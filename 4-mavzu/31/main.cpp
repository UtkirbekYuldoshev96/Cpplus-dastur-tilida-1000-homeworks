#include <iostream>

using namespace std;

void Inger24(){

    int k;
    cout<<"K son kiritng: "; cin>>k;

    cout<<"Hafta kunga "<< k % 7 << "kunga to'g'riga keladi!";
}

// Gradus selsiyga o'tkazish
void gradus(){
       float Tc;
    float Tf;

    cout<<"T (f) qiymat kiriting: "; cin>>Tf;
    Tc = (Tf - 32)*5/9;
    cout<<"Temperatura qiymati = "<< Tc<< endl;

}
int main()
{
    Inger24();
    return 0;
}
