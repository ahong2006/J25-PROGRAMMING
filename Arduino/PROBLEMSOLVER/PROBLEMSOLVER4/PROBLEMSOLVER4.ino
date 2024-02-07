void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    if (contieneTres(numeroProblema)) {
      resolverProblemaDibujo(numeroProblema);
    }
  }
}

void loop() {
}

void resolverProblemaDibujo(int n) {
  Serial.print("Resolviendo problema ");
  Serial.println(n);
}

bool contieneTres(int num) {
  while (num != 0) {
    int digito = num % 10;
    if (digito == 3) {
      return true;
    }
    num /= 10;
  }
  return false;
}
