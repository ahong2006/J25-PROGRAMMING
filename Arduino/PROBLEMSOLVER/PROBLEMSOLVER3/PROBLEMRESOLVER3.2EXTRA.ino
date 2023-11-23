void setup() {
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    if(SumaPar(numeroProblema)) {/
      resolverProblemaDibujo(numeroProblema);
    }
  }
}
bool SumaPar(int numeroProblema){
if(numeroProblema=100){return;false}
int unidades = num % 10;
int decenas = num / 10) % 10;
int Suma = unidades + decenas ;
if( Suma %2==0){ return suma%2 == 0;} 
void loop() {
  // put your main code here, to run repeatedly:
}

void resolverProblemaDibujo(int n) {
  Serial.print("Resolviendo Problema ");
  Serial.println(n);
}
