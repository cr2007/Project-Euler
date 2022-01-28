#include <stdio.h>

int main(int argc, char const *argv[]) {
	int i;
	long smallestMult;
	i = 1;
	smallestMult = 2520;

	while (1) {
		while (i <= 20) {
			if (smallestMult % i == 0) {
				i++;
			} else {
				smallestMult++;
				i = 1;
				break;
			}
		}

		if (i == 21) {
			break;
		}
	}

	printf("Smallest positive number that is evenly divisible by all numbers from 1 to 20 is %ld \n", smallestMult);
}
