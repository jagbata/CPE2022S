#include <iostream>
using namespace std;
// int is 4 bytes or 32 bits
class Fraction {
 private:
  int num, den;  // both parts are four bytes, so 8 bytes total
 public:
  Fraction() : num(0), den(1) {}  // Fraction() {num =0; den =1;}
  Fraction(int n, int d) : num(n), den(d) {}

}


void print(){
  cout << num << "/" << den;
}
}
int main() {
  Fraction a;  // will take 8 bytes on the stack
  // cout << a.num << a.den;
  a.print();
  Fraction b;
  b.print();
}