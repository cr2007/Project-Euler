#include <stdio.h>

int main(int argc, char const *argv[]) {
	// Declaring, Assigning the variables
	
	long sumOfSquare, sqaureOfSum, sumSquareDiff;
	sumOfSquare = sqaureOfSum = sumSquareDiff = 0;

	for (int i = 1; i <= 100; i++) {
		sumOfSquare = sumOfSquare + (i * i);
		sqaureOfSum = sqaureOfSum + i;
	}

	sqaureOfSum = sqaureOfSum*sqaureOfSum;

	sumSquareDiff = sqaureOfSum - sumOfSquare;

	printf("The difference between the sum of the squares of the first 100 hundred natural numbers and the square of the sum is %ld \n", sumSquareDiff);
}
