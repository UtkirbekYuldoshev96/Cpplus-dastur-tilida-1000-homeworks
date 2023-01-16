#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cout<<"haftaning n son kiritng: "; cin>>n;
    cout<<"kun k son kiritng: "; cin>>k;

    cout<<"haftaning "<< (k + n) % 7 << endl;
    return 0;
}
