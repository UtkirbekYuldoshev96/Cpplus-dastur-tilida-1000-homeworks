#include <iostream>
#include <cmath>
using namespace std;

void masofa(float x1, float y1, float x2, float y2){
    float ildiz;
    ildiz = sqrt(pow(x2-x1,2) + pow(y2 - y1, 2));
    cout<<"tekislikdagi masofa = "<<ildiz<<endl;
}

int main(){
    float x1, y1, x2, y2;
    cout<<"x1 qiymat kiriting: "; cin>>x1;
    cout<<"y1 qiymat kiriting: "; cin>>y1;

    cout<<"x2 qiymat kiriting: "; cin>>x2;
    cout<<"y2 qiymat kiriting: "; cin>>y2;

    masofa(x1,y1,x2,y2);
    return 0;
}
