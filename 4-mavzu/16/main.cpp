#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1 ,x2;
    float nuqta;
    cout<<"x1 qiymat : "; cin>>x1;
    cout<<"x2 qiymat : "; cin>>x2;

    nuqta = fabs(x2 - x1);
    cout<<"son o'qida x2 sonidan x1 son o'qidagi masafo : "<<nuqta<<endl;
    return 0;
}
