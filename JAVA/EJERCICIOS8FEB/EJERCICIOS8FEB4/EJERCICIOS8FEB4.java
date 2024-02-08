public class RunningNumberSquareSum {
   public static void main(String[] args) {
      final int LOWERBOUND = 1;
      final int UPPERBOUND = 100;
      int sum = 0;
      int number = LOWERBOUND;
      while (number <= UPPERBOUND) {
         sum = sum + (number * number);
         ++number;
      }
      System.out.println("The sum of the square of numbers from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sum);
   }
}
