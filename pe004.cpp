// A palindromic number reads the same both ways.
// The largest palindrome made from the product of
// two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from
// the product of two 3-digit numbers.

#include <iostream>

using namespace std;

bool isPalindrome(int num) {
  int original, digit, reverse = 0;
  original = num;

  while (num != 0) {
    digit = num % 10;
    reverse = (reverse * 10) + digit;
    num = num / 10;
  }

  if (original == reverse)
    return true;
  else
    return false;
}

int main() {
  int product = 0;
  int num = 0;

  for (int x = 100; x < 999; ++x) {
    for (int y = 100; y < 999; ++y) {
      num = x * y;
      if (isPalindrome(num) and num > product) {
        product = num;
      }
    }
  }
  cout << product << "\n";
  return 0;
}