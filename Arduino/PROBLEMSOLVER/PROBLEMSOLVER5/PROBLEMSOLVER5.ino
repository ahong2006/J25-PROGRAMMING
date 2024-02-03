void setup(){ 
 Serial.begin(9600);

 for(int n=1; n<=30; n++){
  if(n%2==1 && n%3==0){
    resolverProblemaDibujo(n);
  }
}
}

void loop(){   
} 

void resolverProblemaDibujo(int n){ 
 Serial.print("Resolviendo problema"); 
 Serial.println(n); 

} 
