void setup() {
 
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    if (numeroProblema % 7 == 0) {
      resolverProblemaDibujo(numeroProblema);
    }
  }
}

void loop() {
  
}

void resolverProblemaDibujo(int n) {
  Serial.print("Resolviendo Problema ");
  Serial.println(n);
}
