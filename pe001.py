# If we list all the natural numbers below 10 that are multiples
# of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
# Find the sum of all the multiples of 3 or 5 below 1000.


def main(limit):
    multiples = []
    for num in range(0, limit):
        if num % 3 == 0 or num % 5 == 0:
            multiples.append(num)
    return sum(multiples)


if __name__ == '__main__':
    limit = 1000
    print(main(limit))
