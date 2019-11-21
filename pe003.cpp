// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include <math.h>
#include <iostream>

using namespace std;

int main() {
  long int num = 600851475143;
  int sqrtnum = sqrt(num);
  int factor;

  for (int divider = 3; divider <= sqrtnum; divider += 2) {
    while (num % divider == 0) {
      num = num / divider;
      factor = divider;
    }
  }

  cout << factor << "\n";
  return 0;
}