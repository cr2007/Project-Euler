public class Problem1 {

	public static void main(String[] args) {
		int multiples = 0;
		for(int i=1; i<1000; i++) {
			if((i % 3 == 0) || (i % 5 == 0))
				multiples += i;
		}
		System.out.println(multiples);

	}

}
