int dotDuration = 369;
int dashDuration = 3 * dotDuration;
int waitDuration = 5 * dotDuration;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // A
 digitalWrite(LED_BUILTIN, HIGH);
 delay(dotDuration);
 digitalWrite(LED_BUILTIN, LOW);
 delay(dotDuration);
 digitalWrite(LED_BUILTIN, HIGH);
 delay(dashDuration);
 digitalWrite(LED_BUILTIN, LOW);
 delay(dashDuration);

  // N
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dashDuration);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dashDuration);

  // G
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dashDuration);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dashDuration);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dashDuration);

  // E
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dashDuration);

  // L
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dashDuration);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotDuration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(waitDuration);
  
}


 
