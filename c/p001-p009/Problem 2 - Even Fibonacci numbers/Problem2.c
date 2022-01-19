#include <stdio.h>

// Swap Function to switch the values between the variables
void swap(int *a1, int *a2) {
	// Declares a temporary variable
    int t;

    //Switch between the variables 
	t = *a1;
	*a1 = *a2;
	*a2 = t;
}

// Main function
int main(int argc, char const *argv[]) {
    /* Declaring, Assigning the variables */

    //Declaration
    int a1, a2, a3, fibonacciSum;

    //Assignment
    a1 = 1;
    a2 = 2;
    a3 = 0;
    fibonacciSum = 2;

    /* While loop to run iteratively until the
       limit (here, 4 million) has been achieved */
    while(a2 < 4000000) {
        // Fibonacci Sequence Formula
        // aₙ = aₙ₋₂ + aₙ₋₁
        a3 = a1 + a2;

        /* Condition to check if the
           current value is even */
        if (a3 % 2 == 0) {
            // Adds the value to the final sum is true
            fibonacciSum += a3;
        }

        // Swaps the values within the variables
        swap(&a1, &a2);
        // Re-Assigns the value to the sum (here, a₃)
        a2 = a3;
    }

    // Prints out the final value
    printf("Sum of the even-valued terms: %d \n", fibonacciSum);
}
