// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number?

#include <iostream>

using namespace std;

bool isPrime(int n) {

	int i;
	bool prime = true;

	for(i = 2; i <= n / 2; ++i)
	{
		if(n % i == 0)
		{
			prime = false;
			break;
		}
	}
	return prime;
}

int main() {
	int i = 0;
	int nthprime = 0;

	while(nthprime <= 10001) {
		++i;
		if (isPrime(i)) {
			++nthprime;
		}
	}

	cout << i << "\n";
	return 0;
}