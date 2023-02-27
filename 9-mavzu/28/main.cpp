#include <iostream>

using namespace std;

int main()
{
    int x,y;
    bool k;
    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;

    k = (x>0 && y>0) || (x<0 && y<0);
    cout<<"Jumlani tekshiring: "<< k << endl;
    return 0;
}
