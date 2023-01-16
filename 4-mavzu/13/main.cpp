#include <iostream>
#include <cmath>
double Pi =3.14;
using namespace std;

void markaz(float R1, float R2){
        float S1;
        S1 = Pi *R1;
        cout<<"S1 yuza = "<<S1<<endl;

        float S2;
        S2 = Pi *R2;
        cout<<"S2 yuza = "<<S2<<endl;

        float S3;
        S3 = Pi *(R1 - R2);
        cout<<"S3 yuza = "<<S3<<endl;
}

int main(){
    float R1, R2;
    cout<<"R1 son kiriting: "; cin>>R1;
    cout<<"R2 son kiriting: "; cin>>R2;
    markaz(R1,R2);

    return 0;
};
