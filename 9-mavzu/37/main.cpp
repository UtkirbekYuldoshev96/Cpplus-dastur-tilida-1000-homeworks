#include <iostream>
#include <cmath>

using  namespace  std ;

void algo(int x1, y1, x2, y2){
  bool d;
  cout << "x1="; cin >> x1;
  cout << "y1="; cin >> y1;
  cout << "x2="; cin >> x2;
  cout << "y2="; cin >> y2;
  d=(abs(x1-x2)==1 && y1==y2) || (abs(y1-y2)==1 && x1==x2) || (abs(y1-y2)==1 && abs(x1-x2)==1);
  cout << "Jumlaning rostlik qiymati " << d;
}

int main() {

    bool n ;
    int x1, y1, x2, y2, X, Y ;
    cout<<"koordinata kiriting = ";
    cin >> x1 >> y1 >> x2 >> y2 ;

    X = abs(x1-x2);
    Y = abs(y1-y2);

    n = (X==1 || X==0) && (Y==1 || Y==0)&& !(X==0 && Y==0 );
    cout << n << endl;

    return 0;
}
