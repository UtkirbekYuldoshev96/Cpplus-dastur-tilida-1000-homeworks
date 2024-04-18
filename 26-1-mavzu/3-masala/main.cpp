#include <iostream>
using namespace std;

// ishchi sinfi elon qilish
struct Robot{
    char familiya[30];
    char ism[30];
    char lovozim[30];
    float oklad;
    int yosh;
};

// kiritish amalini qayta yuklash
istream& operator >> (istream& input, Robot& k){
    cout<<"Familiyni kiriting\n"; input >> k.familiya;
    cout<<"Ismni kiriting\n"; input >> k.ism;
    cout<<"Lavozimini kiriting\n"; input >> k.lovozim;
    cout<<"Okladni kiriting\n"; input >> k.oklad;
    cout<<"Yoshini kiriting\n"; input >> k.yosh;
    return input;
}

// chiqarish amalini qayta yuklash
ostream& operator << (ostream& out, Robot k){
    out << "\nFamiliya: "<< k.familiya;
    out << "\nIsm: "<< k.ism;
    out << "\nLavozim: "<< k.lovozim;
    out << "\nOklad: "<< k.oklad;
    out << "\nYosh: "<< k.yosh;
    return out;
}

int main()
{
    Robot n;
    int j;
    cout<<"Ishchilar soni "; cin>>j;

    for(int i = 1; i <= j; i++){
        cin>>n;
    }
    for(int i =1; i <= j; i++){
        cout<<n<< endl;
    }
    return 0;
}
