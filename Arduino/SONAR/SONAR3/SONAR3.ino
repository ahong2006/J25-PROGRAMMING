void setup() {
  int depths[] = {90,85,88,83,82,91,93,100,97};
  int speeds[] = {0,0,0,0,0,0,0,0,0};

  for (int i = 0; i < 8; i++) {
    speeds[i] = depths[i + 1] - depths[i];
  }

  
  Serial.print("Speeds: ");
  for (int i = 0; i < 8; i++) {
    Serial.print(speeds[i]);
    Serial.print(" ");
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
