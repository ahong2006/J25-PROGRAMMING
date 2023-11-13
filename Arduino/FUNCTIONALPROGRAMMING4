void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void morseDot() {
  Serial.print(".");
  delay(1000);  // Use 1000 milliseconds for dot duration
}

void morseDash() {
  Serial.print("-");
  delay(1000);  // Use 1000 milliseconds for dash duration
}

void morseA() {
  morseDot();
  morseDash();
  delay(2000);  // Use 2000 milliseconds between characters
}

void morseN() {
  morseDash();
  morseDot();
  delay(2000);  // Use 2000 milliseconds between characters
}

void morseG() {
  morseDash();
  morseDash();
  morseDot();
  delay(2000);  // Use 2000 milliseconds between characters
}

void morseE() {
  morseDot();
  delay(2000);  // Use 2000 milliseconds between characters
}

void morseL() {
  morseDot();
  morseDash();
  morseDot();
  morseDot();
  delay(2000);  // Use 2000 milliseconds between characters
}

void loop() {
  // A
  morseA(); // A's Morse code

  delay(2000);  // Delay between letters
  
  // N
  morseN(); // N's Morse code

  delay(2000);  // Delay between letters

  // G
  morseG(); // G's Morse code

  delay(2000);  // Delay between letters

  // E
  morseE(); // E's Morse code

  delay(2000);  // Delay between letters

  // L
  morseL(); // L's Morse code

  delay(5000);  // Delay between words
}
