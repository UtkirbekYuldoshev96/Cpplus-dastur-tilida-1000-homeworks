#include <iostream>
#include <cmath>
float PI = 3.14;
using namespace std;
void Radian(float x){
    float rad;
    rad = x * PI / 180;
    cout<<"Radian = "<<rad<<endl;
    cout<<"pi qiymati = "<<rad / PI <<" PI ga teng"<<endl;
}
int main(){
    float x;
    cout<<"gradus kiriting: "; cin>>x;
    Radian(x);
    return 0;
}
