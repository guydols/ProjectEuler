// The Fibonacci sequence is defined by the recurrence relation:

// Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1.
// Hence the first 12 terms will be:

// F1 = 1
// F2 = 1
// F3 = 2
// F4 = 3
// F5 = 5
// F6 = 8
// F7 = 13
// F8 = 21
// F9 = 34
// F10 = 55
// F11 = 89
// F12 = 144
// The 12th term, F12, is the first term to contain three digits.

// What is the index of the first term in the Fibonacci sequence to contain 1000
// digits?

#include <iostream>
#include <vector>

std::vector<int> add_vectors(const std::vector<int> &a,
                             const std::vector<int> &b) {
  std::vector<int> result;
  std::vector<int> addition;
  unsigned short int range = 0;

  // get the largest vector for the for loop
  if (a.size() > b.size()) {
    range = b.size();
    addition = b;
    result = a;
  } else {
    range = a.size();
    addition = a;
    result = b;
  }

  // add two vectors of ints
  bool carry = false;
  for (auto i = 0; i < range; ++i) {
    // add the numbers from position i and maby add the carryover
    if (carry) {
      result[i] += addition[i] + 1;
    } else {
      result[i] += addition[i];
    }

    // check if we need to carry 1 over to the next number
    if (result[i] >= 10) {
      result[i] -= 10;
      carry = true;
    } else {
      carry = false;
    }
  }

  while (carry) {
    if (result.size() > range) {
      result[range] += 1;
      carry = false;
      if (result[range] >= 10) {
        result[range] -= 10;
        carry = true;
        range += 1;
      }
    }
    if (result.size() <= range) {
      result.push_back(1);
      carry = false;
    }
  }
  return result;
}

int main() {
  std::vector<int> a{1};
  std::vector<int> b{1};
  int index = 2;

  while ((b.size()) != 1000) {
    index++;
    auto temp = std::move(add_vectors(a, b));
    a = std::move(b);
    b = std::move(temp);
  }

  std::cout << "F" << index << " = ";
  for (auto ir = b.rbegin(); ir != b.rend(); ++ir) {
    std::cout << *ir;
  }
  std::cout << "\n";

  return 0;
}