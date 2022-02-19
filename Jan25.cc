#include <iostream>
using namespace std;

int main() {
  int x[] = {5, 4, 3, 7};
  int sum = 0;
  for (int i = 0; i < 4; i++) {
    sum += x[i];
    cout << sum << " ";
    endl;
  }
  int prod = 1;
  for (int i = 0; i < 4; i++) {
    prod *= x[i];
    cout << prod << endl;
  }
  cout << "poop" << endl;
}