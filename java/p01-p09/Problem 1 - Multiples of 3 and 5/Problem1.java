public class Problem1 {

	public static void main(String[] args) {
		//Declaring the result variable
		int multiples = 0;

		//For loop to add up the multiples of 3 and 5
		for(int i=1; i<1000; i++) { //Limiting the For Loop to first 1000 numbers

			//Condition to filter out the multiples of 3 and 5
			if((i % 3 == 0) || (i % 5 == 0))
				multiples += i; //Adding the multiples into the variable
		}

		//Print the final value
		System.out.println(multiples);
	}
}
