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




 
