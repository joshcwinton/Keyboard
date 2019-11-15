#include <Tone.h>
#include <Wire.h>
#include "Adafruit_TPA2016.h"

Adafruit_TPA2016 audioamp = Adafruit_TPA2016();

Tone tone1;

int JOSH_DELAY = 200;
void setup()
{
  audioamp.begin();
  tone1.begin(12);
  delay(1000);
}

void loop()
{
  tone1.play(NOTE_E3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);

  tone1.play(NOTE_D3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);
  
  tone1.play(NOTE_C3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);
  
  tone1.play(NOTE_D3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);
  
  tone1.play(NOTE_E3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);
  
  tone1.play(NOTE_E3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);
  
  tone1.play(NOTE_E3);
  delay(JOSH_DELAY+200);
  tone1.stop();
  delay(JOSH_DELAY);
  
  tone1.play(NOTE_D3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);
  
  tone1.play(NOTE_D3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);
  
  tone1.play(NOTE_D3);
  delay(JOSH_DELAY+200);
  tone1.stop();
  delay(JOSH_DELAY);
  
  tone1.play(NOTE_E3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);
  
  tone1.play(NOTE_G3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);
  
  tone1.play(NOTE_G3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);

  tone1.play(NOTE_E3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);

  tone1.play(NOTE_D3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);

  tone1.play(NOTE_C3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);

  tone1.play(NOTE_D3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);

  tone1.play(NOTE_E3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);

  tone1.play(NOTE_E3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);

  tone1.play(NOTE_E3);
  delay(JOSH_DELAY+200);
  tone1.stop();
  delay(JOSH_DELAY);

  tone1.play(NOTE_D3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);

  tone1.play(NOTE_D3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);

  tone1.play(NOTE_E3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);

  tone1.play(NOTE_D3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);

  tone1.play(NOTE_C3);
  delay(JOSH_DELAY);
  tone1.stop();
  delay(JOSH_DELAY);
  while(true);
}
