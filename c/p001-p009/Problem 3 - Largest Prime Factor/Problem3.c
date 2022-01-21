#include <stdio.h>

int long largestPrimeFactor(long int n) {
	// Condition to check if the value is a negative value
	if (n <= 1) {
		return 0;
	} else {
		//Creates a factor
		int div = 2;

		// While loop to check
		while (div < (n/2)) {
			// Factor Check
			if ((n % div) != 0) {
				// Increments the div
				div++;
			} else { // Prime Check
				n = n / div;
				div = 2; // Resets the variable
			}
		}
		// Returns the largest factor
		return n;
	}
}


int main(int argc, char const *argv[]) {
	// Declares the variables
	long int number, largestFactor;

	// Assigning the variables
	number = 600851475143;
	largestFactor = largestPrimeFactor(number); // Calls the function and stores the variables

	// Prints out the largest prime factor
	printf("The largest prime factor for the number %ld is: %ld \n", number, largestFactor);
}
