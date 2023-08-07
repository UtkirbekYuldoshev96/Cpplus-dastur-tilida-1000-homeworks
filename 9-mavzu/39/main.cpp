#include<iostream>
#include<math.h>

using namespace std;
int main(){

  int x1, y1, x2, y2;
  bool d;
  cout << "x1="; cin >> x1;
  cout << "y1="; cin >> y1;
  cout << "x2="; cin >> x2;
  cout << "y2="; cin >> y2;
  d = ( abs( x1 - x2 ) == abs( y1 - y2 ) ) or ( x1 == x2 || y1 == y2 );
  cout << "Jumlaning rostlik qiymati " << d;
  return 0;
}
