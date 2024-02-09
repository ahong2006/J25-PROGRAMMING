public class PrintLeapYears {
    public static void main(String[] args) {
        int count = 0;
        System.out.println("Leap years between AD999 and AD2010:");
        for (int year = 999; year <= 2010; year++) {
            if (isLeapYear(year)) {
                System.out.println(year);
                count++;
            }
        }
        System.out.println("Total number of leap years: " + count);
    }

    // Method to check if a year is a leap year
    public static boolean isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
}
