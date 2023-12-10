void setup() {
  int speeds[] = {0,0,0,0,0,0,0,0,0};

  int minSpeed = speeds[0];
  int maxSpeed = speeds[0];
  int totalSpeed = speeds[0];

  for (int i = 1; i < 8; i++) {
    if (speeds[i] < minSpeed) {
      minSpeed = speeds[i];
    }
    if (speeds[i] > maxSpeed) {
      maxSpeed = speeds[i];
    }
    totalSpeed += speeds[i];
  }

  int averageSpeed = totalSpeed / 8;

  Serial.print("Min Speed: ");
  Serial.println(minSpeed);
  Serial.print("Max Speed: ");
  Serial.println(maxSpeed);
  Serial.print("Average Speed: ");
  Serial.println(averageSpeed);
}

void loop() {
  // put your main code here, to run repeatedly:
}
