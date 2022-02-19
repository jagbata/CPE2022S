#include <cmath>
#include <iostream>

using namespace std;

double distance(double x, double y, double xknown, double yknown) {
  double dx = x - xknown, dy = y - yknown;
  return sqrt(dx * dx + dy * dy);
}

int main() {
  const double x1 = 0, y1 = 10, v1 = 11.3;
  const double x2 = 32, y2 = -11, v2 = 22.2;
  const double x3 = -15, y3 = -23.6, v3 = 13.1;

  double x, y;
  cin >> x >> y;
  /*
   */
  // interpolated value of the variable
  double w1 = 1.0 / distance(x, y, x1, y1);
  double w2 = 1.0 / distance(x, y, x2, y2);
  double w3 = 1.0 / distance(x, y, x3, y3);

  double v = (w1 * v1 + w2 * v2 + w3 * v3);
  cout << "Interpolated value is " << v << endl;
}