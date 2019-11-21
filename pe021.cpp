// Let d(n) be defined as the sum of proper divisors of n (numbers less than n
// which divide evenly into n). If d(a) = b and d(b) = a, where a ≠ b, then a
// and b are an amicable pair and each of a and b are called amicable numbers.

// For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44,
// 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4,
// 71 and 142; so d(284) = 220.

// Evaluate the sum of all the amicable numbers under 10000.

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

bool isAmicable(int inputNum) {
  std::vector<int> divisorsOfA;
  std::vector<int> divisorsOfB;
  int number_a = inputNum;
  int number_b;
  int number_c;

  divisorsOfA = properDivisors(number_a);
  number_b = sumVector(divisorsOfA);


  divisorsOfB = properDivisors(number_b);
  number_c = sumVector(divisorsOfB);


  if (number_a == number_c and number_b != inputNum) {
    return true;
  }

  return false;
}

int main() {
  int total = 0;

  for (int i = 1; i <= 10000; ++i) {
    if (isAmicable(i)) {
        std::cout << i << std::endl;
      total += i;
    }
  }

  std::cout << total << std::endl;
  return 0;
}