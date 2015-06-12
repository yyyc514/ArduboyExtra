/*
  Simple Animation example of a sprite
  Written By Joeri http://www.JO3RI.be , 12 June 2015
*/

#include <SPI.h>
#include <EEPROM.h>
#include <Arduboy.h>
#include <ArduboyExtra.h>
#include <sprites.h>
#include "bitmaps.h"

Arduboy arduboy;
Sprites sprites (arduboy);
byte frameCount = 0;

void setup() {
  arduboy.start();
  arduboy.clearDisplay();
  arduboy.display();
}

void loop() {
  arduboy.clearDisplay();
  sprites.draw(0,0,wizard_bitmaps,frameCount);
  frameCount++;
  if (frameCount > 3) frameCount= 0;
  arduboy.display();
  delay(180);
}
