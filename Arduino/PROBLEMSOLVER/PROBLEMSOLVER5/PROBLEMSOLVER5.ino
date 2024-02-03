void setup() {
Serial.begin(9600);
for (int numeroProblema = 1; numeroProblema <= 30; numeroProblema++) {
if (numeroProblema%2==1 && numeroProblema%3==0) { 
resolverProblemaDibujo(numeroProblema);
 } 
}
}
  void loop() {
  }

  void resolverProblemaDibujo(int n) { 
  Serial.print("Resolviendo problema");
  Serial.println(n);
  }
