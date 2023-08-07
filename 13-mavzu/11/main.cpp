#include <iostream>

using namespace std;

int main()
{
   int yun, kom1, kom2;
   cout<<"Yunalish kiriting:\n";
   cout<<"1-Shimol 2-janub 3-sharq 4-g'arb \n"; cin>>yun;

   cout<<"Harakat yunalshini tanlang!\n";
   cout<<"0-o'ng burul 1-chapga burul 2-burulish 180'\n";
   cout<<"Kommanda tanlang 1=\n"; cin>>kom1;
   cout<<"Kommanda tanlang 2=\n"; cin>>kom2;

   switch(yun){
case 1:
    cout<<"Shimolga "; break;
case 2:
    cout<<"Janubga ";  break;
case 3:
    cout<<"Sharqga "; break;
case 4:
    cout<<"G'arbga "; break;
   }

   switch(kom1){
case 0:
    cout<<"O'nga burul "; break;
case 1:
    cout<<"chapga burul "; break;
case 2:
    cout<<"Burulish 180' "; break;
   }

     switch(kom2){
case 0:
    cout<<"O'nga burul "; break;
case 1:
    cout<<"chapga burul "; break;
case 2:
    cout<<"Burulish 180' "; break;
   }
    return 0;
}
