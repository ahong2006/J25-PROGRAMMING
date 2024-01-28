# :rocket: **PROGRAMMING CLASS NOTES**
---


:speech_balloon:**WHAT IS PROGRAMMING?**
---
**PROGRAMMING**: is the process of designing and building computer programs, which are sets of instructions that tell a computer how to perform a specific task or solve a particular problem.


**Programming Languages**: There are numerous programming languages, each with its syntax and rules. Popular languages include Python, Java, C++, JavaScript, and many more. The choice of language often depends on the nature of the task and the preferences of the programmer.
___

**:pencil:What is the CPP/C++ ?**
---
**C++** is a general-purpose programming language that extends the capabilities of the C language and introduces features of object-oriented programming, and it is a high perfomance programming language.

**Advantages of C++**
**High Performance**: C++ offers close-to-the-hardware control and high performance, making it suitable for system-level programming and applications with demanding performance requirements.

**Scalability**: C++ allows developers to mix object-oriented and procedural programming, enabling the creation of flexible and scalable codebases.

**Low-Level Control**: C++ permits direct control over memory and hardware, allowing developers to optimize code to meet specific requirements.

**Rich Community Support**: C++ has a large and active development community, providing abundant resources, libraries, and tools that developers can benefit from.

**Cross-Platform Capability**: C++ programs can be compiled and run on multiple platforms, providing cross-platform compatibility.
___


**👀Special symbols and operators👀**
---
**-Braces {}:**

Used to define blocks of code, such as in functions, loops, and conditional statements.

Also used for initializing arrays and structures.

```C++
//example
void exampleFunction() {

}
```

**-Parentheses ():**

Used in function declarations and calls.

Used in control structures like if statements and loops.

Used in mathematical expressions to specify the order of operations.

```C++
// Example 
int result = add(3, 4);
```

**-Square Brackets []:**

Used for array subscripting and accessing elements.

Also used for declaring arrays.

```C++
// Example 
int numbers[5] = {1, 2, 3, 4, 5};
int thirdElement = numbers[2];
```

**-Semicolon ;:**

Used to terminate statements in C++.

```C++
// Example 
printValues(1, 2, 3);
```

**-Comma ,:**

Used to separate items in a list, such as function arguments or variable declarations.

```C++
// Example 
printValues(1, 2, 3);
```

**-Asterisk :**

Used for pointer declaration and dereferencing.

```c++
// Example of using an asterisk to declare a pointer
int* ptr = nullptr;

// Example of using an asterisk to dereference a pointer
int value = *ptr;
```
___


**🕶WHAT IS THE SYNTAX?🕶**
---

**Syntax🤌🏽** in programming sets the rules for combining symbols and keywords correctly. It defines how statements and constructs should be structured, ensuring the proper arrangement of elements for valid code. Simply put, syntax guides the way code is written to be understood and processed correctly by the language's compiler or interpreter:
___
**Correct Structure**: Syntax ensures that the code is written in a way that the compiler or interpreter of the programming language can understand and process.

**Rules and Conventions**: Each programming language has its own syntax rules and conventions that must be followed for the code to be valid. These rules are often defined in the language's documentation.

**Keywords and Symbols**: Syntax involves using keywords, operators, and symbols in a specific manner.

**Brackets and Indentation**: The use of brackets {}, parentheses (), square brackets [], and indentation is crucial for defining the structure of code blocks, functions, loops, and other constructs.

**End-of-Line Markers**: Many programming languages use semicolons ; or other markers to indicate the end of a statement.

**Case Sensitivity**: Some programming languages are case-sensitive, meaning that uppercase and lowercase letters are treated as distinct.

```C++
//an eample to see the syntax correct
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(2000);                      // wait for a second
  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(1000);     
}

// the loop function runs over and over again forever
void loop() {
 
  digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(500);    
    digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(500);                // wait for a second
}
```
___



**Variables🛌🏽**

They are used for store and manipulate data.
---

**1.Integers (int, short, long, long long)🥢:**

Used to represent whole numbers.

```C++
int 岁数= 18

```

**2.Floating-Point (float, double, long double):**

Used to represent real numbers (numbers with decimal points).

```C++
double sum = 0; 
for(int i = 0; i < 23; i++) 
{
    sum = sum + prices[i]; 
}
double average = sum / 23;
Serial.println(min);
```

**3.Boolean (bool):**

Used to represent true or false values.
```c++
bool isPassed = true;
```
___

**Functions🍸**
---

**Functions🚝** are blocks of code that perform a specific task or set of tasks. They provide a way to modularize code, improve code organization, and enhance reusability. 

-Reusable blocks of code that perform specific tasks.

-Can have parameters and return values.

```c++
void outputIfNegative (int x) {
 if (x<0) {
     Serial.println("The input is a negative number");
```
___

**Control Flow Statements🛫:**
---
Control flow statements in programming are used to manage the flow of execution within a program. They allow you to make decisions, repeat blocks of code, and control the sequence in which statements are executed





