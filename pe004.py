# A palindromic number reads the same both ways.
# The largest palindrome made from the product of
# two 2-digit numbers is 9009 = 91 × 99.
# Find the largest palindrome made from
# the product of two 3-digit numbers.

from lib.formulas import isPalindromic


def main(start, end):
    results = []
    for num1 in range(start, end):
        for num2 in range(start, end):
            if isPalindromic((num2 * num1)):
                results.append(num2 * num1)
    return max(results)


if __name__ == '__main__':
    start = 100
    end = 999
    print(main(start, end))
