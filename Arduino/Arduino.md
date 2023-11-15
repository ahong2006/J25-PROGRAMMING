# Explorations on arduino

---


Arduino is an open-source electronics platform that consists of both hardware and software components. It is designed for hobbyists, artists, designers, and anyone interested in creating interactive objects or environments. Arduino boards are easy-to-use microcontroller platforms that can be programmed to read inputs from sensors, control various electronic components, and communicate with other devices.

[Download arduino IDE](https://www.arduino.cc/en/software)


#Blink Variation
---

**setup() Function**:
Initializes the digital pin LED_BUILTIN as an output.
Turns the LED on (HIGH voltage level) for 2 seconds.
Turns the LED off (LOW voltage level) for 1 second.


**loop() Function**:
Repeats the following pattern indefinitely in the loop:
Turns the LED on for 500 milliseconds.
Turns the LED off for 500 milliseconds.

In summary, the code initializes the LED, turns it on and off in a loop, creating a basic blinking pattern. The delays control the duration of LED on and off states.

[CODE](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/BLINK/BLINKVARIATION/BlinkVariation1.ino)
```C++
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

#Morse Code
---

The program utilizes a predefined Morse code mapping to translate each letter of your name into a distinctive sequence of short and long flashes, creating a visually encoded representation on the Arduino's LED.


<img width="225" alt="morse-2" src="https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/ad41ec14-593d-4378-ac35-b9be9b8b9b14">


[CODE](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/MorseCode/MorseName1.0/MorseName1.0.ino)

So, I try to write my name (ANGEL) in morse code. I use the rule of international morse code:

**1-A dash** is equal to three dots.

**2-The space** between parts of the same letter is equal to one dot.

**3-The space** between 2 letters is equal to three dots.

**4-The space** between 2 words is equal to 5 dots.



#Functional Programming 1
---

As a difference, we **simplifying** the code, we condensed the repetitive dot and dash sequences by creating separate functions, morseDot and morseDash, which define the behavior of each element. By doing so, the program occupies less space and becomes more readable. This abstraction allows us to use more general terms like morseDot and morseDash whenever we need a dot or dash, streamlining the overall structure and making it easier to manage.

```c++

int dotDuration = 500;  // 点（dot）的持续时间，单位为毫秒
int dashDuration = 1500;  // 划线（dash）的持续时间，单位为毫秒

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  // put your setup code here, to run once:
}
void morseDot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
}

void morseDash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
}

void loop() {
  // A
  morseDot(); // 点
  morseDash(); // 划线
  delay(dotDuration * 2);  // 

  // N
  morseDash();
  morseDot();
  delay(dotDuration * 2);

  // G
  morseDash();
  morseDash();
  morseDot();
  delay(dotDuration * 2);

  // E
  morseDot();
  delay(dotDuration * 2);

  // L
  morseDot();
  morseDash();
  morseDot();
  morseDot();
  delay(dotDuration * 6);
}

```
**int dotDuration** = 500;: it's the dotDuration in 500 millisecons, which represents the duration of a dot in Morse code.

**int dashDuration** = 1500;: dashDuration is in 1500 milliseconds, which represents the duration of a line in Morse code.

**void morseDot**= turns on the LED (HIGH), waits for the duration of one dot, and then turns off the LED (LOW), again waiting for the duration of one dot.

**void morseDash** = turns on the LED (HIGH), waits for the duration of one line, and then turns off the LED (LOW), again waiting for the duration of one point.

**void loop** =This function is executed repeatedly after the setup() function completes. Define the Morse code sequence to represent the message "ANGEL". 
The letters are separated by a dotDuration * 2 duration space, and at the end of each letter there is a longer dotDuration * 6 space.




[CODE](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/FUNCTIONALPROGRAMMING/FUNCTIONALPROGRAMMING1/FUNCTIONALPROGRAMMING1.ino)


#Functional Programming 2
---


In contrast to functional programming 1, this version is further simplified, occupying less space. The significant change involves moving not only the dot and dash specifications but also the entire letters into separate voids outside the loop function. Unlike the previous version where loop contained both the specifications and the letters, now the loop only focuses on the Morse code words. This separation enhances clarity, reduces redundancy, and improves the overall efficiency of the program.

```C++
int dotDuration = 500;  // 点（dot）的持续时间，单位为毫秒
int dashDuration = 1500;  // 划线（dash）的持续时间，单位为毫秒

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  // put your setup code here, to run once:
}

void morseDot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
}

void morseDash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
}

void morseA() {
  morseDot();
  morseDash();
  delay(dotDuration*2)
}

void morseN() {
  morseDash();
  morseDot();
  delay(dotDuration*2)
}

void morseG() {
  morseDash();
  morseDash();
  morseDot();
  delay(dotDuration*2)
}

void morseE() {
  morseDot();
  delay(dotDuration*2)
}

void morseL() {
  morseDot();
  morseDash();
  morseDot();
  morseDot();
  delay(dotDuration*2)
}

void loop() {
  // A
  morseA(); // A的摩尔斯电码


  // N
  morseN(); // N的摩尔斯电码

  // G
  morseG(); // G的摩尔斯电码

  // E
  morseE(); // E的摩尔斯电码

  // L
  morseL(); // L的摩尔斯电码
  delay(dotDuration*4)
}
```


I define every letter to a individual function, and then in the loop I put the letter is equal to the function that I have defined

[CODE](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/FUNCTIONALPROGRAMMING/FUNCTIONALPROGRAMMING2/FUNCTIONALPROGRAMMING2.ino)


#Functional Programming 3
---


This Arduino sketch follows the pattern of showcasing Morse code through the built-in LED. Notably, the code has been refined by introducing a function named morseBlink, which serves for both dots and dashes. Each letter is symbolized by a series of dots and dashes, with suitable pauses differentiating them.


```c++
int dotDuration = 500;  
int dashDuration = 1500;  

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void morseBlink(int numberOfDots) {
  
    digitalWrite(LED_BUILTIN, HIGH);
    delay(dotDuration*3);
    digitalWrite(LED_BUILTIN, LOW);
    delay(dotDuration);
  
}

void morseA() {
  morseBlink(1);
  morseBlink(3);
  delay(dotDuration * 2);
}
```
[CODE](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/FUNCTIONALPROGRAMMING/FUNCTIONALPROGRAMMING3/FUNCTIONALPROGRAMMING3.ino)


#Functional Programming 4
---

The 4 is based on the 2, so they are quite similar.The provided code represents a simplified version of the Morse code using the built-in LED. In this version, the morseBlink function handles both dots and dashes by adjusting the number of dots. Each letter (A, N, G, E, L) is defined concisely in the loop, making the code more readable.

In comparison with the previous blink program, this version condenses the Morse code representation, reducing redundancy and improving clarity. The morseBlink function enhances modularity by serving as a common unit for both dots and dashes, contributing to a more efficient and manageable code structure.

[CODE](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/FUNCTIONALPROGRAMMING/FUNCTIONALPROGRAMMING4/FUNCTIONALPROGRAMMING4.ino)


#Functional Programming 5
---

This Arduino sketch displays the Morse code for the word "ANGEL" on the Serial Monitor. Each letter is encapsulated in its own function (morseG, morseN, etc.), utilizing the Serial.print function to output Morse code for dots and dashes.

To distinguish between letters, a forward slash ("/") is appended at the end of each letter. The morseDot function generates a dot (.), while the morseDash function generates a dash (-). This structured approach enhances readability and facilitates the understanding of Morse code representation.

```C++
void setup() {
  
  Serial.begin(9600);
}
void loop() {
  // A
  morseA(); // A's Morse code

  
  
  // N
  morseN(); // N's Morse code

  

  // G
  morseG(); // G's Morse code

  
  // E
  morseE(); // E's Morse code

  
  // L
  morseL(); // L's Morse code

  
  Serial.println();
  delay(1000);

}

void morseDot() {
  Serial.print(".");
  
}

void morseDash() {
  Serial.print("-");
  
}

void morseA() {
  morseDot();
  morseDash();
  Serial.print("/");  
}

void morseN() {
  morseDash();
  morseDot();
  Serial.print("/");
}

void morseG() {
  morseDash();
  morseDash();
  morseDot();
  Serial.print("/");
}

void morseE() {
  morseDot();
  Serial.print("/");
}

void morseL() {
  morseDot();
  morseDash();
  morseDot();
  morseDot();
  Serial.print("/");
}
```
[CODE](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/FUNCTIONALPROGRAMMING/FUNCTIONALPROGRAMMING5/FUNCTIONALPROGRAMMING5.ino)


#ASCII Art
---

The provided Arduino code uses the Serial Monitor to print out the word "Hello" and an ASCII art representation of a bear. The bear drawing is displayed in a stylized manner using text characters, creating a simple and playful visual output. The delay(1557) function introduces a pause before the loop repeats, controlling the timing of the output. The purpose of this code is primarily to demonstrate the use of the Serial Monitor and to create a fun visual element with the ASCII art. When you upload and run this code on an Arduino board, you can open the Serial Monitor in the Arduino IDE to see the printed output.


[A BEAR](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/CHARACTERS/characters)



#COOKING SYSTEM 1
---

This Arduino code sets up a basic cooking system that interacts with the Serial Monitor. Within the loop function, Serial.readString() continuously captures input. The decide function assesses the input, and if it matches "cook," it triggers the cook function. Subsequently, the cook function outputs a message, stating, "We are cooking," to the Serial Monitor.

Operation:

Input "cook" via the Serial Monitor.
The Arduino, upon reading "cook," invokes the decide function.
The decide function, recognizing the input as "cook," calls the cook function.
The cook function, in turn, displays "We are cooking" on the Serial Monitor.

[CODE](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/COOKINGSYSTEM/COOKINGSYSTEM1)


#COOKING SYSTEM 2
---

This Arduino code establishes a cooking system that responds to commands received through the Serial Monitor. The main loop continuously checks for input, and upon receiving a non-empty input, it prints the input and calls the decide function. The decide function, in turn, checks if the input is "cook" or "potato" and performs corresponding actions.And can create a Spanish Omelette if the specified conditions are met. The global variables eggs, potato, oil, and onion represent the quantities of each ingredient. The initial values are set in the code.

**PROCESS**

Send commands via the Serial Monitor.
Upon receiving input, the Arduino prints the input and processes it through the decide function.
If the input is "cook," the cook function is invoked, simulating the preparation of a Spanish Omelette by updating ingredient quantities.
If the input is "potato," the count of potatoes is incremented.


[TORTILLA](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/COOKINGSYSTEM/COOKINGSYSTEM2)


#COOKING SYSTEM 3
---
This Arduino code simulates a cooking system for making Margarita Pizza. The system responds to commands received through the Serial Monitor. The main loop continuously checks for input. Upon receiving non-empty input, it prints the input and processes it through the decide function.

**WHAT IS THE PROCESS?**

Send commands via the Serial Monitor.
Upon receiving input, the Arduino prints the input and processes it through the decide function.
If the input is "cook," the cook function is invoked, simulating the preparation of a Margarita Pizza by updating ingredient quantities (dough, tomato sauce, cheese, and basil).
If the input is "dough," the count of dough is incremented.
The system checks if there are enough ingredients to make a Margarita Pizza and updates the quantities accordingly. If there are not enough ingredients, a corresponding message is printed.

[CODE](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/COOKINGSYSTEM/COOKINGSYSTEM3(Pizza))


#COOKING SYSTEM 4
---
The provided code is a basic implementation of a cooking system using Arduino. It simulates the process of receiving commands through a serial interface and responding accordingly.

**Ingredient Variables**:
The code defines variables for different ingredients such as flour, sugar, egg, butter for the cake, and bananas, milk, berries, sugarOptional for the smoothie.

**Setup and Loop**:
The setup function initializes the serial communication.
The loop function continuously reads serial input and calls the decide function.

**Decide Function**:
The decide function interprets the input commands and performs actions accordingly.
Commands like "cake," "flour," "sugar," etc., are used to increment ingredient quantities.
The "cook" command is a placeholder for a general cooking action (you may customize it for specific recipes).
The "show" command prints the current quantities of ingredients.

**Cooking Functions**:
The makeCake and makeSmoothie functions check whether there are enough ingredients to make a cake or a smoothie, respectively.
If the conditions are met, the quantities of ingredients are adjusted.

[CODE](https://github.com/ahong2006/J25-PROGRAMMING/edit/main/Arduino/COOKINGSYSTEM/COOKONGSYSTEM4)








