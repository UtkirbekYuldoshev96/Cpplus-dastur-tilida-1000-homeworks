#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream matn;

    matn.open("db.txt");
    matn << "C++ - da ma'motlar yozamiz va misollar bor \n";
    matn << "Juda oson \n";

    matn.close(); // fayldi yopamiz
    return 0;
}
