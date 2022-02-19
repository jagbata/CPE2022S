// Jacob Agbata CPE 390 LE
// got help from TA
// https://www.geeksforgeeks.org/power-function-cc/
// Dov Kruger said to do a different hw than the one we did in the lab,
// so i did both here

#include <iostream>
using namespace std;
#include <math.h>

int main() {
  // Lab HW
  cout << "Jacob Agbata" << endl;

  int start, end;
  cin >> start >> end;
  for (int i = start; i <= end; i++) {
    cout << i << ' ';
  }
  cout << endl;
  cin.sync();

  int number;
  cin >> number;
  for (int i = 1; i <= number; i++) {
    for (int j = 1; j <= number; j++) {
      cout << i * j << ' ';
    }
    cout << endl;
  }
  // Dov Kruger HW
  for (int k = 2; k <= 20; k += 2) {
    cout << k << ' ';
  }
  cout << endl;
  int powers;
  for (int l = 0; l <= 10; l++) {
    powers = pow(2, l);
    cout << powers << ' ';
  }
}
