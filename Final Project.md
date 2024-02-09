#FINAL PROJECT OF ARDUINO🎼
--------

**Final Project**
---
The goal of this project is to create a code that, when specific commands are sent via serial communication, the Echo system replies with the same commands to ensure proper transmission. Additionally, if the command is "m:" or "morse", the subsequent line will be sent in Morse code. If the command is correct, the system will send a recipe for a selected dish and play (or stop) a song.

**Principal code**
___

This part integrates all the main commands and is the most important part of the program. Depending on the commands you enter in the serial monitor, he will respond differently, like play: to play music.

[CODE](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/Proyecto%20Arduino/CODIGO%20PRINCIPAL/Codigo%20Principal.ino)


**Morse**
___

This is the part that integrates the Morse code. Depending on the letters you type, it will be converted into a different Morse code.

[CODE](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/Proyecto%20Arduino/morse.ino)


**Song**
___

This is the part that integrates the score as well as the play, if you give it a play command it will start playing the bgm, if you give the stop command it will stop playing (theoretically, although no one has done it so far)

![SI_3DSVC_SuperMarioBros_image1280w](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/6f6c1726-de43-4a44-b383-1a76a542ceb5)

For the score, I chose this epochal Nintendo creation, super mario bros, which not only pushed Nintendo to new heights and created a new type of game, but also made itself an enduring Nintendo classic IP

[Code](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/Proyecto%20Arduino/song.ino)


**Cook**
___

This is the section for recipes, and I prepared about three dishes

[CODE](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/Proyecto%20Arduino/cook.ino)

Because I had some problems earlier, with the help of my classmates I made the three dishes separate and different code

[Sushi](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/Proyecto%20Arduino/sushi.ino)

[Yakisoba](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/Proyecto%20Arduino/yakisoba.ino)

[Dorayaki](https://github.com/ahong2006/J25-PROGRAMMING/blob/main/Arduino/Proyecto%20Arduino/Dorayaki.ino)
