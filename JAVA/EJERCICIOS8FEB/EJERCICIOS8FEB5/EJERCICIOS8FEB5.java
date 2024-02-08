public class RunningNumberProduct {
   public static void main(String[] args) {
      final int LOWERBOUND = 1;
      final int UPPERBOUND = 10;
      int product = 1;
      int number = LOWERBOUND;
      while (number <= UPPERBOUND) {
         product = product * number;
         ++number;
      }
      System.out.println("The product of numbers from " + LOWERBOUND + " to " + UPPERBOUND + " is " + product);
   }
}
