# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143?

import math


def main(num):
    factors = []
    for divider in range(3, int(math.sqrt(num)) + 1, 2):
        while num % divider == 0:
            num = num / divider
            factors.append(divider)
    return max(factors)


if __name__ == '__main__':
    number = 600851475143
    print(main(number))
