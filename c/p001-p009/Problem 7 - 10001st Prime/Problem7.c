#include <stdio.h>

int primeNumberFunc(int n) {
	int count, factor;
	long prime;
	count = factor = prime = 0;

	while (count != n) {
		if (n <= 1) {
			return 0;
		} else {
			int div = 2;

			while (div < (n / 2)) {
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int number;
	long primeNo;
	number = 10001;
	primeNo = primeNumberFunc(number);

	printf("The %d st Prime Number is: %ld \n", number, primeNo);
}
