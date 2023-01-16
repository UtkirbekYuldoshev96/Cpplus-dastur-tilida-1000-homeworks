#include <iostream>

using namespace std;

void Ekub(int a, int b){
    while(a != b){
        if(a>b){
            cout<< a-=b;
        }else{
           cout<< b-=a;
        }
    }
}

int main()
{
    int x,y;
    cout<<"x kiriting :"; cin>>x;
    cout<<"y kiriting :"; cin>>y;

    Ekub(x,y);
    return 0;
}
