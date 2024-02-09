public class ThreeFiveSevenSum {
    public static void main(String[] args) {
        int sum = 0;
        for (int i = 1; i <= 1000; i++) {
            if ((i % 3 == 0 || i % 5 == 0 || i % 7 == 0) && !(i % 15 == 0 || i % 21 == 0 || i % 35 == 0 || i % 105 == 0)) {
                sum += i;
            }
        }
        System.out.println("Sum of numbers divisible by 3, 5, or 7 but not by 15, 21, 35, or 105: " + sum);
    }
}

