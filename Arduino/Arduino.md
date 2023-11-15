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

