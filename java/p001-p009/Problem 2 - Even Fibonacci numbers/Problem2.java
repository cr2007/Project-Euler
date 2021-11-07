import java.util.Scanner;
public class Problem2 {

	public static void main(String[] args) {
    	//1,2,3,5,8....
		// scanner used to read the limit value from user
		Scanner scan = new Scanner(System.in);

		System.out.print("Enter the limit for the array"); //Prompt to make the user enter the value
		int limit=scan.nextInt(); //Integer Variable declared based on the user's input

		double[] number=new double[limit]; //Array creation based on the 'limit' variable
		
		//The first two array elements are added
		number[0]=1;
		number[1]=2;
		System.out.println("The elements of the fibonacci series are");
		System.out.println(number[0]);
		System.out.println(number[1]);	
		
		//For loop to add elements to the array
		for(int i=2;i<limit;i++){ 
			number[i]=number[i-1]+number[i-2];
			System.out.println(number[i]);
		}
		double sum=0;

		//read the array
		for(int i=0;i<limit;i++){
			if(number[i]%2==0) // condition to check if it is even
				sum=sum+number[i];
		}

		System.out.println("The sum is: "+ sum); //Prints out the Sum
	}
}
