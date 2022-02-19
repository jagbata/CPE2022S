#include <cmath>
#include <cstdint>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
using namespace std;

double rms(double array[], int len) {
  double sum = 0;

  for (int i = 0; i <= len; i++) {
    sum += array[i] * array[i];
  }

  return sqrt(sum / (1.0 * len));
}
double polar2rect(double r, double theta, double& x, double& y) {
  x = r * cos(theta);
  y = r * sin(theta);
  return x, y;
}

int main() {
  double a1[] = {10, 20, 30, 40};
  cout << "rms(a) = " << rms(a1, 4.0) << "\n";
  double x, y, r, theta;
  cout << "please enter r,theta: ";
  cin >> r >> theta;
  polar2rect(r, theta, x, y);
  cout << "x,y = " << x << ", " << y << "\n\n\n";
  return 0;
}
