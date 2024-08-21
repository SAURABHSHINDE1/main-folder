import java.util.Arrays;

public class PrimeNumberArray {
    public static void main(String[] args) {
        // Check if command line arguments are provided
        if (args.length == 0) {
            System.out.println("Please provide numbers as command line arguments.");
            return;
        }

        // Convert command line arguments to integers
        int[] numbers = new int[args.length];
        for (int i = 0; i < args.length; i++) {
            numbers[i] = Integer.parseInt(args[i]);
        }

        // Find prime numbers and store them in an array
        int[] primeNumbers = findPrimeNumbers(numbers);

        // Display prime numbers
        System.out.println("Prime numbers: " + Arrays.toString(primeNumbers));
    }

    /**
     * Finds prime numbers in the given array and returns them in a new array.
     *
     * @param numbers the array of numbers to check for prime numbers
     * @return an array of prime numbers
     */
    public static int[] findPrimeNumbers(int[] numbers) {
        int primeCount = 0;
        for (int num : numbers) {
            if (isPrime(num)) {
                primeCount++;
            }
        }

        int[] primeNumbers = new int[primeCount];
        int index = 0;
        for (int num : numbers) {
            if (isPrime(num)) {
                primeNumbers[index++] = num;
            }
        }

        return primeNumbers;
    }

    /**
     * Checks if a number is prime.
     *
     * @param num the number to check
     * @return true if the number is prime, false otherwise
     */
    public static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}