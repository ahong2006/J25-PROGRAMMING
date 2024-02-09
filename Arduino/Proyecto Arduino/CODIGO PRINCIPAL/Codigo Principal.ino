#include "morse.h"
#include "cook.h"
#include "song.h"

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial. available() > 0) {
    String command = Serial.readStringUntil('\n');

    Serial.println("You have written: " + command);

    if (command.startsWith("m: ") || command.startsWith("morse ")) {
      String message = command.substring(command.indexOf(' ') + 1);
      translateToMorse(message);
    }

    if (command.equalsIgnoreCase("recipe")) {
      cook();
    }

    if (command.equalsIgnoreCase("play")) {
      playSong();
    } 
    else if (command.equalsIgnoreCase("stop")) {
      stopSong();
    }
  }
}
