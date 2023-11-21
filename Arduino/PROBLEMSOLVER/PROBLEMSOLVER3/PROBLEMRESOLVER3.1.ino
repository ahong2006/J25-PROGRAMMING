void setup() {
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    if (numeroProblema % 10 == 3 || numeroProblema % 10 == 6) {//如果numeroProblema 是 23, 那么 numeroProblema % （除法）10 就会是 3，因为会剩下来=residuo.
      resolverProblemaDibujo(numeroProblema);
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}

void resolverProblemaDibujo(int n) {
  Serial.print("Resolviendo Problema ");
  Serial.println(n);
}
