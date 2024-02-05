public class Main {  // Corrected the class name to start with a capital letter
   public static void main(String[] args) {
  
      double base, area, perimetro, sideA , sideB, h;  // Corrected variable name 'sideb' to 'sideB'
  
      final double PI = 3.14159265;
      base = 1.2;
      sideA = 3 ;
      sideB = 4 ;  // Corrected variable name 'sideb' to 'sideB'
      h = 2 ;
      area = (base * h) / 2 ;
      perimetro = sideA + sideB + base ;  // Corrected the calculation for perimeter
      
      System.out.print("The area is ");
      System.out.println(area);
      System.out.print("The perimetro is ");  // Corrected the print statement
      System.out.println(perimetro);  // Corrected to print 'perimetro'
   }
}

