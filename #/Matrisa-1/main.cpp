#include <iostream>
using namespace std;
void Matrisa(){
    int matris[10][10];

    matris[0][1] = 1;
    matris[8][3] = 2;
    matris[1][6] = 3;
    matris[9][1] = 4;
    matris[1][8] = 5;
    matris[19][11] = 6;
    matris[17][1] = 7;
    matris[33][15] = 8;
    matris[40][23] = 9;
    matris[1][10] = 10;

    for(int i=0; i<=10; i++){
        for(int j=0; j<=10; j++){
            cout<<matris[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    Matrisa();
    return 0;
}
