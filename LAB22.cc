#include <cmath>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}
bool isPrime(int c) {  // 5 %2 != 0, 5%3 != 0, 5%4 != 0, then 5 is prime.
  bool flag = true;

  if (c == 0 || c == 1) {
    return false;
  }

  for (int i = 2; i <= c - 1; i++) {
    if (c % i != 0) {
      continue;
    }

    if (c % i == 0) {
      flag = false;
    }
  }
  /*if (flag == false) { // This is part of our original code for isPrime but we
  commented it out for countPrimes cout << "Not prime"; } else { cout <<
  "prime";
  }
*/
  return flag;
}

int countPrimes(int a, int b) {
  int start, end, counter;
  counter = 0;
  cin >> start >> end;

  for (int i = start; i <= end; i++) {
    if (isPrime(i) == true) {
      counter += 1;
    }
  }

  return counter;
}

void collatz(int n) {  // input = 5 ,  should print out 5 16 8 4 2 1
  int coll;
  coll = n;
  while (coll >= 1) {
    if (coll == 1) {
      cout << coll << " " << endl;
      break;
    }

    cout << coll << " ";
    if (coll % 2 != 0) {
      coll = 3 * coll + 1;

    } else {
      coll = coll / 2;
    }
  }

  return;
}

double mean(double x[], int n) {
  double mean = (double)n;
  double sum = 0;
  for (int i = 0; i < n; i++) {
    sum += x[i];
  }
  mean = sum / mean;

  return mean;
}

void demean(double x[], int n) {
  double average = mean(x, n);
  for (int i = 0; i <= n; i++) {
    x[i] -= average;
  }
}

int prod(int x[], int n) {
  double prod = 1;  // if you make prod 0, it will always be 0 no matter what
                    // b/c this is multiplication
  for (int i = 0; i < n; i++) {
    prod = x[i] * prod;
  }
  return prod;
}

void range_reverse(int x[], int n, int a, int b) {
  double store = 0;
  for (int i = a; i >= b; i--) {
    store = x[b];
    x[a] = x[b];
    x[b] = store;
    a--;
    b--;
    cout << x[b] << ' ';
  }
}

double hypot(double a, double b) {
  double c = sqrt(pow(a, 2) + pow(b, 2));
  return c;
}

double means(double a, double b) {
  double means = (a + b) / 2;
  return means;
}

bool pythagTriple(double a, double b) {
  double c = sqrt(pow(a, 2) + pow(b, 2));
  bool Whole = true;
  double d;
  d = round(c);
  if (d != c) {
    Whole = false;
  }
  return Whole;
}

double areaOfTriangle(double x1, double y1, double x2, double y2, double x3,
                      double y3) {
  double sidea1 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
  double sidea2 = sqrt(sidea1);
  double sideb1 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
  double sideb2 = sqrt(sideb1);
  double sidec1 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
  double sidec2 = sqrt(sidec1);
  double ss = (sidea2 + sideb2 + sidec2) / 2;
  double area = sqrt(ss * (ss - sidea2) * (ss - sideb2) * (ss - sidec2));
  // cout << "this is the area" << area;
  return area;
}

int main() {
  cout << "gcd(12, 18)=" << gcd(12, 18) << '\n';
  cout << "gcd(1025, 3025)=" << gcd(1025, 3025) << '\n';

  cout << "isPrime(5)=" << isPrime(5) << '\n';
  cout << "isPrime(9)=" << isPrime(9) << '\n';
  cout << "isPrime(1001)=" << isPrime(1001) << '\n';
  cout << "isPrime(2601)=" << isPrime(2601) << '\n';
  cout << "isPrime(1013)=" << isPrime(1013) << '\n';
  /*
    cout << "countPrimes(1,100): " << countPrimes(1, 100) << '\n';
    cout << "countPrimes(1,10000): " << countPrimes(1, 10000) << '\n';
    */

  collatz(5);   // should print out 5 16 8 4 2 1
  collatz(40);  // should print out 40 20 10 5 16 8 4 2 1
  collatz(17);

  double x[] = {10, 20, 30, 40, 50, 60};
  constexpr int n = sizeof(x) / sizeof(double);
  cout << "the mean of the previous numbers is " << mean(x, n) << endl;
  cout << "Now we subtracted the mean from the values: "
       << endl;  // should print 35

  double y[] = {1.0, 2.0, 3.0, 4.0};
  cout << mean(y, sizeof(y) / sizeof(double)) << '\n';  // should print 2.5

  int a[] = {3, 4, 1, 2, -2};
  cout << prod(a, sizeof(a) / sizeof(int)) << '\n';

  int b[] = {2, 4, 8, -2, -4};
  cout << prod(b, sizeof(b) / sizeof(int)) << '\n';

  demean(x, n);  // should subtract the mean from each element
  for (int i = 0; i < n; i++) cout << x[i] << ' ';
  cout << '\n';

  int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  range_reverse(c, 9, 2, 4);

  // you should print out the array c
  for (int i = 0; i < sizeof(c) / sizeof(int); i++)
    cout << c[i] << ' ';  // should print 1 2 5 4 3 6 7 8 9
  cout << '\n';

  cout << "hypot(3,4)=" << hypot(3, 4) << '\n';  // should print 5
  cout << "hypot(4,5)=" << hypot(4, 5) << '\n';

  cout << "mean(3.0,sqrt(8.0)) = " << means(3.0, sqrt(8.0)) << '\n';

  cout << "mean(1,4)=" << means(1, 4) << '\n';

  cout << "is sqrt(3**2 +4**2) is a whole number?: " << pythagTriple(3, 4)
       << endl;
  cout << "is sqrt(2**2 +3**2) is a whole number?: " << pythagTriple(2, 3)
       << endl;

  cout << areaOfTriangle(0, 0, 10, 0, 10, 5) << '\n';  // should be approx 25
  cout << areaOfTriangle(0, 0, 5, 3, 2, 6) << '\n';

  return 0;
}
