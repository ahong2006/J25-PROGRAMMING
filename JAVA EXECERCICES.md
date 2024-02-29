**JAVA CODE EXPLANATIONS**
--------



**Triangulos**
---
```java
public class Main {  // Corrected the class name to start with a capital letter
   public static void main(String[] args) {
  
      double base, area, perimeter, sideA, sideB, h;  // Corrected variable name 'sideb' to 'sideB'
  
      final double PI = 3.14159265;
      base = 1.2;
      sideA = 3 ;
      sideB = 4 ;  // Corrected variable name 'sideb' to 'sideB'
      h = 2 ;
      area = (base * h) / 2 ;
      perimeter = sideA + sideB + base ;  // Corrected the calculation for perimeter
      
      System.out.print("The area is ");
      System.out.println(area);
      System.out.print("The perimeter is ");  // Corrected the print statement
      System.out.println(perimeter);  // Corrected to print 'perimeter'
   }
}
```
This Java program defines variables for base, height, and side lengths of a geometric shape, computes its area using the triangle area formula, and perimeter by summing side lengths. It then prints these values, serving as a basic demonstration of calculation and output in Java programming.

**Exercise 5 Feb.**
---

It initializes two integers, performs arithmetic operations (addition, subtraction, multiplication, division, and modulus), displays the results, increments one variable and decrements the other, recalculates the quotient, then prints the updated quotient, showcasing basic arithmetic and variable manipulation in Java.

[LINK](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/JAVA/EJERCICIOS%205FEB/EJERCICIOS/EJERCICIO1%20/EJERCICIO1.java)

The second task involves creating a program that computes the sum of two numbers. The first number is multiplied by 31, and the second number is multiplied by 17. Afterward, the program prints the resulting sum.

[LINK](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/JAVA/EJERCICIOS%205FEB/EJERCICIOS/EJERCICIO2/EJERCICIO2.java)

The third task entails developing a program to compute the sum of three numbers. The first number undergoes multiplication by 31, the second number by 17, and then the third number is added. Subsequently, the program prints the resulting sum.

[LINK](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/JAVA/EJERCICIOS%205FEB/EJERCICIOS/EJERCICIO3/EJERCICIO3.java)

**EXCERCICES 8 Feb.**
---

1. "For the first task, the objective is to compute the sum of integers ranging from 9 to 899 (inclusive) and then display the result."
[LINK](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/JAVA/EJERCICIOS8FEB/EJERCICIOS8FEB1/EJERCICIOS8FEB1.java)
2. "In the second task, the program is designed to calculate the sum of all odd integers between 1 and 1000 (inclusive) and print the resulting sum."
[LINK](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/JAVA/EJERCICIOS8FEB/EJERCICIOS8FEB2/EJERCICIOS8FEB2.java)
3. "As for the third task, the program's aim is to compute the sum of numbers divisible by 7 within the range of 1 to 1000 (inclusive) and output the final sum."
[LINK](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/JAVA/EJERCICIOS8FEB/EJERCICIOS8FEB3/EJERCICIOS8FEB3.java)
4. "The fourth task involves the program computing the sum of the squares of all numbers from 1 to 100 (inclusive) and then printing the total sum."
[LINK](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/JAVA/EJERCICIOS8FEB/EJERCICIOS8FEB4/EJERCICIOS8FEB4.java)
5. "Lastly, the fifth task requires the program to calculate the product of integers from 1 to 10 (inclusive) and print the resulting product."
[LINK](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/JAVA/EJERCICIOS8FEB/EJERCICIOS8FEB5/EJERCICIOS8FEB5.java)



**ECERCICES CLASS 9 Feb.**
---

The program iterates from 1 to 1000, adding numbers divisible by 3, 5, or 7, excluding those divisible by 15, 21, 35, or 105, then prints the sum.

[LINK](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/JAVA/EJERCICIOS%209FEB/EJERCICIOS%209FEB1/EJERCICIOS9FEB1.java)

The second Java program iterates through years from AD999 to AD2010, printing leap years using the `isLeapYear` method. It counts leap years and displays both the leap years and the total count. The `isLeapYear` method checks if a year is divisible by 4 but not by 100 unless it is divisible by 400, adhering to the leap year rules.

[LINK](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/JAVA/EJERCICIOS%209FEB/EJERCICIOS9FEB2/EJERCICIOS9FEB2.java)




Today's class covered several key concepts:
---

**Abstraction**: Abstraction simplifies complex systems by hiding irrelevant details and focusing on essential aspects. For example, two different pens (one blue and one red, from different brands) can be abstracted as simply "pens." There are two main levels of abstraction:

1. High-level abstraction: This level hides technical details to make interfaces easier for humans to understand. Examples include high-level programming languages like Python or Java, and graphical user interfaces (GUIs) with intuitive elements like buttons and dropdown menus.

2. Low-level abstraction: This level deals with specific hardware or operating system details. Examples include assembly language for direct processor and memory access, and system APIs for managing files and memory. The Command Line Interface (CLI) in Windows is also an example of low-level abstraction.

Object-Oriented Programming (OOP): OOP organizes code around objects, which are data fields with unique attributes and behavior. OOP focuses on manipulating objects rather than the logic needed to manipulate them. It's suitable for complex, evolving projects and collaborative development.

**Interface**: An interface is how users interact with computers. There are two main types:

1. Graphical User Interface (GUI): GUIs use visual elements like windows, icons, and buttons for intuitive interaction. They are user-friendly and support actions like clicking and dragging.

2. Command Line Interface (CLI): CLIs are text-based interfaces used mainly by programmers. They offer precise control over system functions through text commands. For instance, the Windows Command Prompt provides a CLI for executing commands.


**EXCERCICES 15 Feb.**

This Java program calculates the sum of numbers divisible by 3, 5, or 7 (but not by 15, 21, 35, or 105) within the range from 1 to 1000. It utilizes a while loop to iterate through the numbers within this range, checking each number for divisibility conditions and updating the sum accordingly. Finally, it prints out the calculated sum along with the specified range of numbers.

Key points:

The constants LOWERBOUND and UPPERBOUND define the range of numbers to consider.
The variable 'sum' accumulates the sum of qualifying numbers.
The 'while' loop iterates through each number in the defined range.
The 'if' statement checks divisibility conditions and updates the sum if the number meets the criteria.
The program concludes by printing the calculated sum along with the specified range of numbers.

```java
public class Main {
   public static void main(String[] args) {
      final int LOWERBOUND = 1;
      final int UPPERBOUND = 1000;
      int sum = 0;
      int number = LOWERBOUND;

      while (number <= UPPERBOUND) {
         if ((number % 3 == 0 || number % 5 == 0 || number % 7 == 0) &&
             !(number % 15 == 0 || number % 21 == 0 || number % 35 == 0 || number % 105 == 0)) {
            sum = sum + number;
         }
         ++number;
      }
      System.out.println("The sum of numbers divisible by 3, 5, or 7 (but not by 15, 21, 35, 105) from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sum);
   }
}
```


It prints leap years between the years 1 and 2024 inclusively. It utilizes a for loop to iterate through each year within this range, checking each year for leap year conditions. If a year is identified as a leap year, it is printed, and the count of leap years is incremented. Finally, the program prints out the total count of leap years within the specified range.

```java
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
```
