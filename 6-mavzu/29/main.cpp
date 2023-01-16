#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    int resalt;
    int yuza;
    cout<<"a tomon kiriting: "; cin>>a;
    cout<<"b tomon kiriting: "; cin>>b;
    cout<<"c kvadrat kiring: "; cin>>c;

    resalt = a / c;
    yuza = b / c;

    cout << "Barcha joylashgan kvadratchalar soni " << resalt * yuza << " ta" << endl;
    cout << "Ortib qolgan yuza esa " << a * b - resalt * yuza * (c * c);

    return 0;
}
