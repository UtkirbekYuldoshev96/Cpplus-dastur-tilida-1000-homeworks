#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"x = "; cin>>x;
    cout<<"y = "; cin>>y;

    if(x==0 && y==0){
        cout<<"nol = "<< 0 << endl;
    }else if(x !=0 && y==0){
        cout<<"bir = "<< 1<<endl;
    }else if(x==0 && y!=0){
        cout<<"ikki = "<<2<<endl;
    }else{
        cout<<"uch = "<<3<<endl;
    }
    return 0;
}
