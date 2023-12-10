void setup() {
  // put your setup code here, to run once:
int depths [] = {90,85,88,83,82,91,93,100, 97};
int increasesdDepth = 0 ;
for( int i = 0; i <= 8 ; i++){
  if( depths[i] - depths[i+1]>0) {
        increasedDepths++;
  }
}

Serial.println(increasedDepths);


void loop() {
  // put your main code here, to run repeatedly:

}
