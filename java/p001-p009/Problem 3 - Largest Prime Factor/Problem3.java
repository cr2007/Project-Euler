public class Problem3 {

	public static void main(String[] args) {
		long number = Long.parseUnsignedLong("600851475143");
		System.out.println("The largest Prime Factor of " + number + " is: " + largestPrimeFactor(number));

	}

	public static long largestPrimeFactor(long n) {
		//Number Check
		if (n <= 1) {
			return 0;
		} else {
			int div = 2;
			while (div < n/2) {
				//Factor Check
				if (n % div != 0) {
					div++;
				//Prime Check
				} else {
					n = n / div;
					div = 2;
				}
			}
			return n;
		}
	}
}
