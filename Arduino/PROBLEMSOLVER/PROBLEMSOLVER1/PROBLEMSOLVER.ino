void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
int numeroProblema = 1;
while(numeroProblema<=50){
  resolverProblemaDibujo(numeroProblema);
numeroProblema++;
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
void resolverProblemaDibujo(int n){
  Serial.print("Resolviendo Problema");
  Serial.println(n);
}
