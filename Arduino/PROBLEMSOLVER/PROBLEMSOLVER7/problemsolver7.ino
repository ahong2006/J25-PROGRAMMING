void setup() {
  Serial.begin(9600);

  for (int n = 1; n <= 100; n++) {
    int sum = sumOfDigits(n);
    if (sum == 10 || sum == 5) {
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

int sumOfDigits(int number) {
  int sum = 0;
  while (number > 0) {
    sum += number % 10;
    number /= 10;
  }
  return sum;
}
