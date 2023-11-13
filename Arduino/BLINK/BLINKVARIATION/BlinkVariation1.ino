void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(2000);                      // wait for a second
  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(1000);    
   
}


void loop() {
 
  digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(500);    
    digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(500);              // wait for a second
           
}
