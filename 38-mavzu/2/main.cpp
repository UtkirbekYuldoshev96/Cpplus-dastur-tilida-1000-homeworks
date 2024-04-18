#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream uqish;
    string matn;

    uqish.open("index.txt");

    // agar fayl ochilmay qolsa shart bajariladi
    if( !uqish.is_open() ){
        cout<<"Faylda ochishda xatolik sodir bo'ldi.\n";
        exit(1); // dasturni tugatish
    }

    while(!uqish.eof()){
        // fayldan o'qish
        getline(uqish, matn);

        cout<< matn << endl;
    }

    uqish.close(); // fayl o'qish tugatish

    return 0;
}
