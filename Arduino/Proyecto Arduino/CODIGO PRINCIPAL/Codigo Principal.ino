#include "morse.h"
#include "cook.h"
#include "song.h"

void setup() {
 
Serial.begin(9600);
}
 
void loop() {
  readSerial();
}
 
 
void readSerial() {
 // Serial.println("Miau");
  if (Serial.available()>0){
  String word = Serial.readString();
  word.trim();
  Serial.println(word);
  Serial.println("Longitud del string: ");
  Serial.println(word.length());
  decide(word);
  }
}
 
void decide (String command){
  Serial.println("hola");
    if (command.equals("play")) {
     // playMusic();
      return;
    }
    if (command.equals("stop")){
      //stopTheMusic = true;
    }
    if (command.equals("morse")){
      outputMorse(command);
    }
    if (command.equals("cook")){
     // decideCooking("in");
    }
 }
