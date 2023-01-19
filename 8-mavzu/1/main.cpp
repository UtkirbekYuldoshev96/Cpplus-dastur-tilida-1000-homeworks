#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    int resalt1;
    int resalt2;
    int resalt3;
    a = true;
    b = false;
    c = true;
    d = false;

    resalt1 = !((a && b) || (c && d) || (a || b));
    resalt2 = ((a && b) || (c && d) || (a || b));
    resalt3 = !((a && b) || (c && d));
    cout <<"natija = "<< resalt1 << endl;
    cout <<"natija = "<< resalt2 << endl;
    cout <<"natija = "<< resalt3 << endl;
    return 0;
}
