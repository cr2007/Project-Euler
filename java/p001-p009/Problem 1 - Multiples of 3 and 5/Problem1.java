public class Problem1 {

	public static void main(String[] args) {
		// Creates a variable to store the sum value
		int multiples = 0;

		/* For loop to calculate the multiples
		   and add them to the final variable */
		for(int i=1; i<1000; i++) {
			/* Condition which checks if the
			   number is a multiple of 3 or 5 */
			if((i % 3 == 0) || (i % 5 == 0))
				multiples += i; // Adds the respective number to the final variable
		}
		System.out.println(multiples); // Prints out the final value

	}

}
