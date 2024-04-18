#include <iostream>

using namespace std;

int main()
{
    double v1, v2, s, t;
    cout<<"v1 ni kiriting: "; cin>> v1;
    cout<<"v2 ni kiriting: "; cin>> v2;
    cout<<"s ni kiriting: "; cin>> s;
    cout<<"t ni kiriting: "; cin>> t;

    //cout<< t << " vaqtdan so'ng ular orasidagi masofa "<< s + (v1 + v2) * t << endl;
    // 37- masala
    cout<<t<<" vaqtdan so'ng ular orasidagi masofa "<< s - (v1+v2) * t << endl;

    return 0;
}
