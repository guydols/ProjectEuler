// If we list all the natural numbers below 10 that are multiples of 3 or 5, we
// get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the
// multiples of 3 or 5 below 1000.

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int range = 1000;
  int sum = 0;
  vector<int> multiples;

  for (int i = 0; i < range; ++i) {
    if (i % 3 == 0 or i % 5 == 0) {
      multiples.push_back(i);
    }
  }

  for (auto i : multiples) {
    sum += i;
  }

  cout << sum << "\n";
  return 0;
}