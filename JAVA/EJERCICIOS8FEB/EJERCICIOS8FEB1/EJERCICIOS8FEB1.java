public class RunningNumberSum1 {
   public static void main(String[] args) {
      final int LOWERBOUND = 9;
      final int UPPERBOUND = 899;
      int sum = 0;
      int number = LOWERBOUND;
      while (number <= UPPERBOUND) {
         sum = sum + number;
         ++number;
      }
      System.out.println("The sum from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sum);
   }
}
