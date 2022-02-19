#include <iostream>
using namespace std;
double hypot(double a, double b) {
  double c = sqrt(pow(a, 2) + pow(b, 2));
  return c;
}
int main() { cout << hypot(2, 3); }

double rect 2 polar(double x, double y, double& r, double& theta) {}