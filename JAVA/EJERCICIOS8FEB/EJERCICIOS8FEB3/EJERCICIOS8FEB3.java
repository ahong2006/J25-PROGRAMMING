public class RunningNumberMod7Sum {
   public static void main(String[] args) {
      final int LOWERBOUND = 1;
      final int UPPERBOUND = 1000;
      int sum = 0;
      int number = LOWERBOUND;
      while (number <= UPPERBOUND) {
         sum = sum + number;
         number = number + 7;
      }
      System.out.println("The sum of numbers divisible by 7 from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sum);
   }
}
