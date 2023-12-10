void setup() {
  int depths[] = {90,85,88,83,82,91,93,100,97};
  int increasedDepths = 0;
  int decreasedDepths = 0;
  int sameDepths = 0;

  for (int i = 0; i < 8; i++) {
    if (depths[i] < depths[i + 1]) {
      increasedDepths++;
    } else if (depths[i] > depths[i + 1]) {
      decreasedDepths++;
    } else {
      sameDepths++;
    }
  }

  Serial.print("Increased Depths: ");
  Serial.println(increasedDepths);
  Serial.print("Decreased Depths: ");
  Serial.println(decreasedDepths);
  Serial.print("Same Depths: ");
  Serial.println(sameDepths);
}

void loop() {
  // put your main code here, to run repeatedly:
}
