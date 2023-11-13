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
