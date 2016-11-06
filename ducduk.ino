/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(500);

 
  // Ending stream 
  //removed to loop presses in another class
 // Keyboard.end();
}

/* Unused endless loop */
void loop() {
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();

  delay(100);

  
  }
