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
---
They are used for store and manipulate data.
___

**1.Integers (int, short, long, long long)🥢:**

Used to represent whole numbers.

```C++
int 岁数= 18

```
**2.Long (Long Integer):**

Similar to an integer but can hold larger values.

The size of a long can vary based on the programming language and system architecture.

Often used for representing very large integers.

```c++
long myLong = 123456789012345;

```

**3.8int (8-bit Integer):**

This seems like a shorthand for an 8-bit integer, representing values from 0 to 255 for an unsigned 8-bit integer.

```c++

int8_t my8Int = 100;
```


**4.Floating-Point (float, double, long double):**

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

**5.Boolean (bool):**

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
**Control flow** statements in programming are used to manage the flow of execution within a program. They allow you to make decisions, repeat blocks of code, and control the sequence in which statements are executed

**1."if" statement**
___
Used for conditional branching.

Executes a block of code only if a specified condition is true.

```c++
if (x[4] < x[1]

```
**Else**:
___
Else is used in conjunction with the if statement to provide an alternative block of code to be executed when the specified condition in the if statement evaluates to false.

```c++
if (condition) {
    // code to be executed if the condition is true
} else {
    // code to be executed if the condition is false
}
```

**2."while"**
___

Executes a block of code repeatedly as long as a specified condition is true.

```c++


int main() {
    int count = 0;

    while (count < 5) {
        
    }

    return 0;
}
```

**3."for"**
___
Executes a block of code repeatedly, with an explicit initialization, condition, and iteration statement.

```c++
for(int i = 0; i < 50; i++)
```
___



**Arrays🧮**
---

**Array:** is a collection of elements of the same type, stored in contiguous memory locations. Arrays provide a convenient way to organize and access a fixed-size sequence of values.
___

1-Arrays store a collection of elements of the same type.

2-Pointers store memory addresses.

```c++

int numbers[5] = {1, 2, 3, 4, 5};

```

---

**Types of notation🥷**
---


**1.camelCase:**

Used for naming methods and variables.

The first letter is lowercase, and each subsequent concatenated word starts with an uppercase letter.

Example: myVariable, calculateTotalAmount()
___

**2.PascalCase:**

Used for naming objects and classes.

Similar to camelCase, but the first letter is also uppercase.

Example: Person, CarModel
___

**3.kebab-case:**

Used in URLs and sometimes for naming files or directories in web development.

Words are in lowercase, separated by hyphens.

Example: user-profile, page-content
___

**4.snake_case:**

Words are in lowercase, and spaces are replaced by underscores.

Commonly used in variable and function names in languages that do not allow spaces.

Example: user_age, calculate_total_amount()
___

**5.SCREAMING_SNAKE_CASE:**

Similar to snake_case but with uppercase letters for all characters.

Often used for constants in some programming languages.

Example: MAX_VALUE, PI_CONSTANT
___




**SCOPES👮‍♂️**
---


Refers to the context or range in which a variable or identifier can be accessed or modified
___

**Global Scope (Ámbito Global):**

Variables declared in the global scope are accessible from anywhere in the program.

They are defined outside of any function or block of code.
___

**Local Scope (Ámbito Local):**

Variables declared in a local scope are only accessible within a specific function or block of code where they are defined.

This helps encapsulate variables and avoid unintended interactions with other parts of the program.
___




**🦈STRINGS🦈**
---

In programming, a string is a sequence of characters, representing text. It is a fundamental data type widely used for tasks such as input/output, text processing, and data storage.

___

**Important Constructors**
___

String(): Constructs an empty string.

String(const char *str): Constructs a string from a null-terminated character array.

String(const string *str): Constructs a string from another string object.



**Essential String Functions**
___

append(): Appends a portion of a string to another.

assign(): Assigns a segment of a string.

at(): Retrieves the character at a specified position.

begin(): Retrieves a reference to the start of the string.

capacity(): Indicates the total capacity of the string.

compare(): Compares the string with another.

empty(): Checks if the string is empty.

end(): Retrieves a reference to the end of the string.

erase(): Removes characters as per specified criteria.

find(): Searches for the occurrence of a specified substring.

length(): Provides the length of the string.

swap(): Swaps the content of two strings.



**TONE🎧**
---

The tone() function in C++ is utilized to produce a sound on a specific pin of a microcontroller. To invoke this function, the following syntax is employed:

```C++
  tone(buzzer, melody[thisNote], noteDuration * 0.9);//((pinNumber, frequency, duration);)

  
    delay(noteDuration);

   
    noTone(buzzer);
```

```c++
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST      0
int tempo = 200;
int buzzer = 11;
int melody[] = {
  NOTE_E5,8, NOTE_E5,8, REST,8, NOTE_E5,8, REST,8, NOTE_C5,8, NOTE_E5,8, 
  NOTE_G5,4, REST,4, NOTE_G4,8, REST,4, 
  NOTE_C5,-4, NOTE_G4,8, REST,4, NOTE_E4,-4, 
  NOTE_A4,4, NOTE_B4,4, NOTE_AS4,8, NOTE_A4,4,
 for (int i = 0; i < 42; i++) {
    if (melody[i] != NOTE_REST) {
      tone(8, melody[i]); 
      delay(noteDurations[i] * 250); 
      noTone(8);
    } else {
      delay(noteDurations[i] * 250); 
    }
    delay(50); 
  }
}
```
We can modify the melody[] array to play other tracks by simply adding the frequencies of the desired notes to the array and adjusting the duration of each note accordingly.



