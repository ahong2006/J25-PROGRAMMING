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

void morseN() {
  morseBlink(3);
  morseBlink(1);
  delay(dotDuration * 2);
}

void morseG() {
  morseBlink(3);
  morseBlink(3);
  morseBlink(1);
  delay(dotDuration * 2);
}

void morseE() {
  morseBlink(1);
  delay(dotDuration * 2);
}

void morseL() {
  morseBlink(1);
  morseBlink(3);
  morseBlink(1);
  morseBlink(1);
  delay(dotDuration * 2);
}

void loop() {
  // A
  morseA(); 

  // N
  morseN(); 

  // G
  morseG(); 

  // E
  morseE(); 

  // L
  morseL(); 

  delay(dotDuration * 4);  
}
