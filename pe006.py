# The sum of the squares of the first ten natural numbers is,
# 1^2 + 2^2 + ... + 10^2 = 385
# The square of the sum of the first ten natural numbers is,
# (1 + 2 + ... + 10)^2 = 55^2 = 3025
# Hence the difference between the sum of the squares of the first
# ten natural numbers and the square of the sum is 3025 − 385 = 2640.
# Find the difference between the sum of the squares of the
# first one hundred natural numbers and the square of the sum.


def main(limit):
    sumOfSqr = 0
    sqrOfSum = 0
    for num in range(1, limit + 1):
        sumOfSqr = sumOfSqr + num
        sqrOfSum = sqrOfSum + pow(num, 2)
    sumOfSqr = pow(sumOfSqr, 2)
    return (sumOfSqr - sqrOfSum)


if __name__ == "__main__":
    limit = 100
    print(main(limit))
