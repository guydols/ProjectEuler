import lib.decorators as deco


@deco.profile
def main(rng):
    for a in range(1, rng):
        for b in range(a, rng - a):
            for c in range(b, rng - b):
                if a + b + c == rng:
                    if pytri(a, b, c):
                        return a * b * c


def pytri(a, b, c):
    if a * a + b * b == c * c:
        return True
    return False


if __name__ == '__main__':
    print(main(1000))
