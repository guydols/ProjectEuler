// The sum of the squares of the first ten natural numbers is,
// 1^2 + 2^2 + ... + 10^2 = 385
// The square of the sum of the first ten natural numbers is,
// (1 + 2 + ... + 10)^2 = 55^2 = 3025
// Hence the difference between the sum of the squares of the first
// ten natural numbers and the square of the sum is 3025 − 385 = 2640.
// Find the difference between the sum of the squares of the
// first one hundred natural numbers and the square of the sum.

#include <cmath>
#include <iostream>

using namespace std;

int main() {
  float sumofsq, sqofsum = 0.0;

  for (float i = 1; i <= 100; ++i) {
    sumofsq = sumofsq + i;
    sqofsum = sqofsum + pow(i, 2.0);
  }

  sumofsq = pow(sumofsq, 2.0);

  cout << int(sumofsq - sqofsum) << "\n";
  return 0;
}