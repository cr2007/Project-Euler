public class Problem9 {
    
	public static void main(String[] args) {
        
        //Declaring the 3 variables
        int a;
        int b;
        int c;
        int sum = 1000; //Declaring the Sum Variable

        //This for loop checks all the numbers from 1 to sum (1000)
        for(a = 1; a <= sum/3; a++){ //For loop to determine the value of 'a'
            for(b = a+1; b <= sum/2; b++){ //For loop to determine the value of 'b'
                c = sum - a - b; //Initialising the value of variable 'c'
                if(a*a + b*b == c*c){ //Condition to check whether the 3 values are a Pythogorean Triplet
                    
                //Printing the results if true
                System.out.println("The value of a is: " + a); //Prints out the value of 'a'
                System.out.println("The value of b is: " + b); //Prints out the value of 'b'
                System.out.println("The value of c is: " + c); //Prints out the value of 'c'
                System.out.println("The product of abc is: " + a*b*c); //Prints out the product of 'abc'
                }                        
            }
        }
    }
}
