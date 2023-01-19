#include <iostream>

using namespace std;

int main()
{
    float a,b;
    float resalt;
    cout<<"son kiriting: "; cin>>a;
    cout<<"son kiriting: "; cin>>b;

    resalt = (a > b) || (b > a);
    cout<< "natija = "<< resalt << endl;
    return 0;
}
