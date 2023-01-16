#include <iostream>

using namespace std;

void Ekvilid(int a, int b){
    if(a==0 || b==0){
        cout<<a+b;
    }else if(a>=b){
        return Ekvilid(a-b, b);
    }else{
        Ekvilid(a, b-a);
    }
}

int main()
{
    int x,y;

    cout<<"x son kiriting = "; cin>>x;
    cout<<"y son kiriting = "; cin>>y;
    Ekvilid(x,y);
    return 0;
}
