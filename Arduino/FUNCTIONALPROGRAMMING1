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






     
