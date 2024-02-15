public class Main {
   public static void main(String[] args) {
      final int START_YEAR = 1;
      final int END_YEAR = 2024;
      int count = 0;
      for (int year = START_YEAR; year <= END_YEAR; year++) {
         if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            System.out.println(year);
            count++;
        }
      }
      System.out.println("Total number of leap years between " + START_YEAR + " and " + END_YEAR + " is " + count);
   }
}
