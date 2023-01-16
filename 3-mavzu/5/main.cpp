#include <iostream>

using namespace std;

void Tempuratura(float v1, float v2){
    float t,v;
    float t1,t2;

    cout<<"t1 kiriting: "; cin>>t1;
    cout<<"t2 kiriting: "; cin>>t2;
    t = (v1+v2)*t2+v1*t1/2*v1+v2;
    v = v1+v2;
    cout<<"v1 + v2 = "<<v<<endl;
    cout<<"tempuratura = "<<t<<endl;
}
int main()
{
    float a,b;
    cout<<"v1 kiriting: "; cin>>a;
    cout<<"v2 kiriting: "; cin>>b;
    Tempuratura(a,b);
    return 0;
}
