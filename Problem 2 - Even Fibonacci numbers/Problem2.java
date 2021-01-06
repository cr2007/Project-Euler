import java.util.Scanner;
public class Problem2 {

	public static void main(String[] args) {
    //1,2,3,5,8
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter the limit for the array");
		int limit=scan.nextInt();
		double[]number=new double[limit];
		number[0]=1;
		number[1]=2;
		System.out.println(number[0]);
		System.out.println(number[1]);	
		for(int i=2;i<limit;i++)
		{ 
			number[i]=number[i-1]+number[i-2];
		System.out.println(number[i]);
		}
		double sum=0;
		for(int i=0;i<limit;i++)
		{if(number[i]%2==0)
		sum=sum+number[i];}
		System.out.println("The sum is:"+sum);
    }

}
