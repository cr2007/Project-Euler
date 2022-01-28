#include <stdio.h>

int main(int argc, char const *argv[]) {
	/*** Declaring, Assigning the Variables ***/

	int i; // Counter Variable (Factor)
	long smallestMult; // Storing Variable (Multiple)
	i = 1;
	smallestMult = 2520; /* Starts from the number that is already
							evenly divisible from 1 to 10 */

	// Infinite Loop
	while (1) {
		// Runs it upto 20
		while (i <= 20) {
			// Condition which checks if the number is divisible by the factor
			if (smallestMult % i == 0) {
				// Increments the factor
				i++;
			} else {
				smallestMult++; // Increments the multiple
				i = 1; // Resets the factor
				break; // Exits the first loop
			}
		}

		/* Condition which checks if the factor variable is higher than
		   the range specified (thereby discovering the multiple) */
		if (i == 21) {
			break; // Exis the infinite loop
		}
	}

	// Prints the smallest multiple
	printf("Smallest positive number that is evenly divisible by all numbers from 1 to 20 is %ld \n", smallestMult);
}
