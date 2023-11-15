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
IT LOOKS SIMILAR,BUT IT IS MORE SHORT THAN THE 1

I DEFINE EVERY LETTER LIKE A INDIVIDUAL FUNCTION

AND THEN IN THE LOOP I PUT THE LETTER IT'S EQUAL THE FUNCTION THAT I HAVE DEFINED


