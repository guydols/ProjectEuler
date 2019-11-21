// 2520 is the smallest number that can be divided by each
// of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly
// divisible by all of the numbers from 1 to 20?

#include <iostream>

using namespace std;

int main() {
  int limit = 20;
  int num = limit;
  int ans = 0;

  while (ans == 0) {
    ans = num;
    for (int i = 11; i < limit; ++i) {
      if (!(num % i == 0)) {
        ans = 0;
      }
    }
    num += limit;
  }

  cout << ans << "\n";
  return 0;
}