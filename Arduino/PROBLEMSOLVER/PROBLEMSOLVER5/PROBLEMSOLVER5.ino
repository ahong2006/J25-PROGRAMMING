void setup() {
  Serial.begin(9600);

  for (int n = 1; n <= 100; n++) {
    if (n % 2 == 1 || n % 6 == 0) {
      resolverProblemaDibujo(n);
    }
  }
}

void loop() {
  // Nothing to loop
}

void resolverProblemaDibujo(int n) {
  Serial.print("Resolviendo problema ");
  Serial.println(n);
}
