// A perfect number is a number for which the sum of its proper divisors is
// exactly equal to the number. For example, the sum of the proper divisors of
// 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.

// A number n is called deficient if the sum of its proper divisors is less than
// n and it is called abundant if this sum exceeds n.

// As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16,
// the smallest number that can be written as the sum of two abundant numbers
// is 24. By mathematical analysis, it can be shown that all integers greater
// than 28123 can be written as the sum of two abundant numbers. However, this
// upper limit cannot be reduced any further by analysis even though it is known
// that the greatest number that cannot be expressed as the sum of two abundant
// numbers is less than this limit.

// Find the sum of all the positive integers which cannot be written as the sum
// of two abundant numbers.

#include <iostream>
#include <vector>

std::vector<int> properDivisors(int number) {
  std::vector<int> divisors;

  for (int i = 1; i < number; ++i) {
    if (number % i == 0) {
      divisors.push_back(i);
    }
  }

  return divisors;
}

int sumVector(std::vector<int> numbers) {
  int total = 0;

  for (auto number = numbers.begin(); number != numbers.end(); ++number) {
    total += *number;
  }

  return total;
}

bool isSumOfTwoAabundantNumbers(int number) {
  if (number & 1) {
    return false;
  }

  std::vector<int> divisorsOfNum;
  int sum;

  divisorsOfNum = properDivisors(number / 2);
  sum = sumVector(divisorsOfNum);

  if (sum > (number / 2)) {
    return true;
  }

  return false;
}

int main() {
  long long total = 0;

  for (int i = 0; i <= 28123; ++i) {
    if (isSumOfTwoAbundantNumbers(i)) {
      total += i;
    }
  }

  std::cout << total << std::endl;
  return 0;
}