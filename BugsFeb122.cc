#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  cout << setprecision(9);

  float a = 0;
  for (float i = 1.0000000000000; i <= 100; i++) {
    a += (1 / i);
  }
  cout << "Forwards: " << a << " ";
  cout << '\n';
  float b = 0;
  cout << "Here is the reverse:" << endl;
  for (float i = 100.000000; i >= 1; i--) {
    b += (1 / i);
  }
  cout << b << " ";
  cout << '\n';
  double c = 0;
  for (double i = 1.0000000000000; i <= 100; i++) {
    c += (1 / i);
  }
  cout << "Forwards: " << c << " ";
  cout << '\n';

  double d = 0;
  cout << "Here is the reverse:" << endl;
  for (double i = 100.000000; i >= 1; i--) {
    d += (1 / i);
  }

  cout << d << " ";
  cout << "\n";
  cout << "The difference between the correct number and the forwards float "
          "is: ";
  cout << d - a << endl;
  cout << "The difference between the correct number and the reverse float "
          "is: ";
  cout << d - b << endl;

  return 0;
}
