#include <cmath>
#include <cstdint>
#include <cstdio>
#include <iomanip>
#include <iostream>
// Jacob Agbata and Zeyad Eltemsah, got help from TA
using namespace std;

float sum_forward(int n) {
  float a = 0;
  for (float i = 1; i <= n; i++) {
    a += (1 / i);
  }
  cout << "Forwards: " << a << '\n';
  return a;
}

float sum_backward(int n) {
  float b = 0;
  for (float i = n; i >= 1; i--) {
    b += (1 / i);
  }
  cout << "reverse: " << b << '\n';
  return b;
}

float mystery_sum1(int n) {  // this works then gets worse becuase you are
                             // dividing by 0 at some point
  float s = 0;
  float sq = 0;  // s =1; s= s+1

  for (int32_t i = 1; i <= n; i++) {
    s += 1.0 / (i * i);
    double num = i * i;
    sq = (sqrt(6 * s));
    if (s / num == 0) {
      cout << "p";
    }
  }
  printf("%9.7lf %9.7lf \n", s, sq);

  return s;
}
float mystery_sum1corrected(int n) {  // this works then gets worse becuase you
                                      // are dividing by 0 at some point
  double s = 0;
  double sq = 0;

  for (int64_t i = 1; i <= n; i++) {
    s += 1.0 / (i * i);
    double num = i * i;
    sq = (sqrt(6 * s));
    if (s / num == 0) {
      cout << "p";
    }
  }
  printf("%9.7lf %9.7lf \n", s, sq);

  return s;
}
float mystery_sum2(int n) {  // this works then gets worse becuase you are
                             // dividing by 0 at some point
  float s = 0;
  float sq = 0;

  for (int32_t i = n; i >= 1; i--) {
    s += 1.0 / (i * i);
    sq = (sqrt(6 * s));
  }
  printf("%9.7lf %9.7lf\n", s, sq);
  return s;
}

float mystery_sum2corrected(int n) {  // this works then gets worse becuase you
                                      // are dividing by 0 at some point
  double s = 0;
  double sq = 0;

  for (int64_t i = n; i >= 1; i--) {
    s += 1.0 / (i * i);
    sq = (sqrt(6 * s));
  }
  printf("%9.7lf %9.7lf\n", s, sq);// int 1,2,3,4 double 1.1,1.2 
  return s;
}
double combineNumber(int a, int b) {// 1 1/10 =.1
  double c = a * 1.0;
  double d = b * 1.0;
  while (d >= 1) {
    d /= 10.0;
  }
  return c + d;
}
void add(double c[3][3], const double a[3][3], const double b[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }
}
void print(const double a[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << a[i][j] << "|";
    }
    cout << "\n";
  }
}
void quadratic(double a, double b, double c) {
  double negb = b * -1.0;
  double root1 = 0;
  double root2 = 0;
  root1 = (negb + sqrt((b * b) - (4 * a * c))) / (2 * a);
  root2 = (negb - sqrt((b * b) - (4 * a * c))) / (2 * a);
  cout << "The two roots are " << root1 << " and " << root2;
}

int main() {
  cout << setprecision(8) << setw(10);
  // test cases for question 1:
  cout << "answers for question 1:-------------------------" << endl;
  float q1_ans_1 = sum_forward(100);
  float q1_ans_2 = sum_backward(100);

  // test cases for question 2:
  cout << "answers for question 2:-------------------------" << endl;
  // input variable n = 100 for both functions,

  float s1 = mystery_sum1corrected(10000000);
  // cout << n << '\t' << s1 << '\t' << sqrt(6 * s1);
  cout << combineNumber(34, 125) << '\n';
  cout << "answers for question 4:-------------------------" << endl;
  // matrix example 1
  double a1[3][3] = {{1, 2, 3}, {4, 1, -2}, {-3, 1, 4}};
  double b1[3][3] = {{5, -1, 3}, {3, 2, 4}, {-2, 4, -2}};
  double c1[3][3];
  add(c1, a1, b1);  // c = a + b
  print(c1);
  /* should print
            6  1  6
            7  3  2
            -5 5  2

    // matrix example 2
    double a2[3][3] = {
      {1.0, 2.5, -2.0},
      {2.0, 1.3, 1.2},
      {-1.2, 1.4, 3.1}
    };
    double b2[3][3] = {
      {2.0, 1.5, 1.0},
      {-1.0, 2.3, 1.2},
      {-1.2, 1.4, 3.1}
    };
    double c2[3][3];
    add(c2, a2, b2); // c = a + b
    print(c2);
    */
  quadratic(1.0, 2.0, 1.0);
  return 0;
}
