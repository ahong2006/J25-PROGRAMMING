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





