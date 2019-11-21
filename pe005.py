# 2520 is the smallest number that can be divided by each
# of the numbers from 1 to 10 without any remainder.
# What is the smallest positive number that is evenly
# divisible by all of the numbers from 1 to 20?


def main(limit):
    number = limit
    while True:
        if all(number % divisor == 0 for divisor in range(11, limit)):
            return number
        number += limit


if __name__ == "__main__":
    limit = 20
    print(main(limit))
