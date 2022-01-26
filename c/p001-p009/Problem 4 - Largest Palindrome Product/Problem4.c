#include <stdio.h>

/*** Function to reverse an integer value ***/
int reverseInt(long product) {
	/*** Declaring, Assigning the variables ***/
	int remainder;
	remainder = 0;

	long reverseNum;
	reverseNum = 0;

	/*** While loop to reverse the product ***/
	while (product != 0) {
		// Calculates the modulus of the product by 10
		remainder = product % 10;
		// Adds the remainder to the reversed variable
		reverseNum = (reverseNum * 10) + remainder;

		// Removes the last digit by dividing the 'int' value by 10
		product = product/10;
	}

	// Returns the reversed number
	return reverseNum;
}

int main() {
	/*** Declaring, Assigning the factor variables ***/
	int a, b;
	a = b = 0;

	/*** Declaring, Assigning the product variables ***/
	long largestPalindromeProduct, product, reversed, palindromeProduct;
	product = reversed = 0;
	largestPalindromeProduct = palindromeProduct = 0;

	/*** For Loop to go through each product ***/
	for (int i = 100; i < 1000; i++) { // Factor 1
		for (int j = 100; j < 1000; j++) { // Factor 2
			// Calculates the product
			product = i*j;
			// Calls the 'reverseInt' function and reverses the product
			reversed = reverseInt(product);

			/*** Palindrome Number Check ***/
			if (product == reversed) {
				// Assigns the palindrome product variable
				palindromeProduct = product;

				/*** Largest Palindrome Product Check ***/
				if (palindromeProduct > largestPalindromeProduct) {
					// Assigns largest palindrome product
					largestPalindromeProduct = palindromeProduct;
					// Assigns the factors
					a = i;
					b = j;
				}
			}
		}
	}

	/*** Prints out the largest palindrome product ***/
	printf("The largest palindrome made from the product of two 3-digit numbers: %ld \n", largestPalindromeProduct);
	/*** Prints out its factors ***/
	printf("The factors are : %d and %d \n", a, b);
}
