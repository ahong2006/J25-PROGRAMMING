void setup() {
  
  Serial.begin(9600);  

  String webiwabo = "webiwabo"; 

  Serial.println(webiwabo); 
  Serial.println(webiwabo[0]);  

  String juanito = webiwabo[1]; 
  Serial.println(juanito);

  webiwabo[1] = webiwabo[0];
  webiwabo[0] = juanito;

  Serial.println(webiwabo);  

  // Swap 'a' and 'i'
  String anotherwebiwabo = "webiwabo"; 

  Serial.println(anotherwebiwabo); 
  Serial.println(anotherwebiwabo[4]);  

  String pepito = anotherwebiwabo[6]; 
  Serial.println(pepito);

  anotherwebiwabo[4] = anotherwebiwabo[6];
  anotherwebiwabo[4] = pepito;

  Serial.println(anotherwebiwabo);  

}
String myString = "webiwabo!";
  Serial.println("Original String: " + myString);

 
  myString.setCharAt(7, 'v');
  
  Serial.println("Modified String: " + myString);
}

void loop() {
  // put your main code here, to run repeatedly:
}
