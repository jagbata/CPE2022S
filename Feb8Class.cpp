#include <cmath>
#include <iostream>
using namespace std;
// Topic: Recursions
/*parity: even--> always make even number of ones
                              1010 1111 p=0
                              1110 1111 p=1// seems like its returning 1 or 0
based on if it finds an error with the system 0000 0001 p=1 ECC : hardware error
correction (2 bits)
//funtions allow you to split up your code effieciently
*/
int add(int a, int b) { return a + b; }

double hypot(double a, double b);  // function prototype

int factorial(int n) {  // n*(n-1)*(n-2)*...1
  int prod = 1;
  for (int i = 1; i <= n; i++) prod *= i;
  return prod;
}
int fact(int n) {  // this is the same thing done recursively
  if (n == 1) return 1;
  return n * fact(n - 1);
}

int count(int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) sum++;
  return sum;
}
int count2(int n) {
  if (n == 0) return 0;

  return 1 + count2(n - 1);
}
double fibo(int n) {
  double a = 1, b = 1, c;
  // a=1 1 2 3
  // b=1 2 3 5
  // c=2 3 5 8
  for (int i = 0; i < n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  return c;
}

double fibo2(int n) {  // O(2^n)
  if (n <= 2) {
    return 1;
  }

  return fibo2(n - 1) + fibo2(n - 2);
}

int main() {
  // cput<<add(2,3)<<'\n';
  // optimizer will generate:

  cout << add(2, 3) << '\n';
  cout << factorial(5) << '\n';
  cout << fact(5) << '\n';
  cout << count2(10000) << '\n';
  cout << fibo(20) << '\n';
  cout << fibo2(20) << '\n';
  return 0;
}
