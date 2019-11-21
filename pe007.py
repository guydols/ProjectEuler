# By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
# we can see that the 6th prime is 13.
# What is the 10 001st prime number?

from lib.formulas import isPrime


def main(limit):
    count = 0
    num = 0
    while count <= limit:
        num += 1
        if isPrime(num):
            count += 1
    return num


if __name__ == "__main__":
    limit = 10001
    print(main(limit))
