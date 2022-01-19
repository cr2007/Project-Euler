#include <stdio.h>

// Main method
int main(int argc, char const *argv[]) {
    // Declaring and Assigning the variable
    int multiples;
    multiples = 0;

    /* For Loop to go through the numbers and
       add the numbers which are factors of 3 or 5 */
    for (int i = 1; i < 1000; i++) {
        // Condition to check if the number is a factor of 3 or 5
        if ((i % 3 == 0) || (i % 5 == 0)) {
            // Adds the number to the variable
            multiples += i;
        }
    }

    // Prints out the result
    printf("%d \n", multiples);
}
