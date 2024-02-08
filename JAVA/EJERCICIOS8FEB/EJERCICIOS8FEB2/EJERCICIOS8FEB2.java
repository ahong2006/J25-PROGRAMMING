public class RunningNumberOddSum {
   public static void main(String[] args) {
      final int LOWERBOUND = 1;
      final int UPPERBOUND = 1000;
      int sum = 0;
      int number = LOWERBOUND;
      while (number <= UPPERBOUND) {
         sum = sum + number;
         number = number + 2;
      }
      System.out.println("The sum of odd numbers from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sum);
   }
}
