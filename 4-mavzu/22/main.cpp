#include <iostream>

using namespace std;

int main()
{
    string name1, name2;
    string name;
    cout<<"A ism : "; cin>>name1;
    cout<<"B ism : "; cin>>name2;

    name = name1;
    name1 = name2;
    name2 = name;

    cout<<"A object = "<<name1<<endl;
    cout<<"B object = "<<name2<<endl;

    return 0;
}
