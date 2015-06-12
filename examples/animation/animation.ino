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

void setup() {
  arduboy.start();
  arduboy.clearDisplay();
  arduboy.display();
}

void loop() {
  // put your main code here, to run repeatedly:

}
