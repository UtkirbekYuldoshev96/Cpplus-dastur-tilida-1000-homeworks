#include <iostream>

using namespace std;

int main(){
    float i = 1; //sanagich
    float s = 0; //yig'indi

    while(i <= 50){
        s += 1 / i;
        i++;
    }

    cout<<"natija = "<<s<<endl;
    return 0;
}


int main_proktika()
{
    int i = 1;

    while( i <= 10){
        cout<<"i index = "<<i<<endl;
        i++;
    }
    return 0;
}
