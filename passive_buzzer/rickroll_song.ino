//www.elegoo.com
//2016.12.08

#include "pitches.h"

//Define Pins
#define PIN 8

//Song: Never Gonna Give You Up (Reference : https://noobnotes.net/never-gonna-give-rick-astley/ )
//music note, duration, delay

int melody[][3] = {
  {NOTE_A5, 500, 300},
  {NOTE_B5, 500, 300},
  {NOTE_D6, 500, 300},
  {NOTE_B5, 500, 300},
  {NOTE_FS6, 500, 500},
  {NOTE_FS6, 500, 500},
  {NOTE_E6, 800, 1000},

  {NOTE_A5, 500, 300},
  {NOTE_B5, 500, 300},
  {NOTE_D6, 500, 300},
  {NOTE_B5, 500, 300},
  {NOTE_E6, 500, 500},
  {NOTE_E6, 500, 500},
  {NOTE_D6, 500, 500},
  {NOTE_CS6, 500, 300},
  {NOTE_B5, 800, 1000},

  {NOTE_A5, 500, 300},
  {NOTE_B5, 500, 300},
  {NOTE_D6, 500, 300},
  {NOTE_B5, 500, 300},
  {NOTE_D6, 500, 300},
  {NOTE_E6, 500, 300},
  {NOTE_CS6, 500, 300},
  {NOTE_A5, 500, 500},
  {NOTE_A5, 500, 500},
  {NOTE_E6, 500, 300},
  {NOTE_D6, 500, 800},

  {NOTE_A5, 500, 300},
  {NOTE_B5, 500, 300},
  {NOTE_D6, 500, 300},
  {NOTE_B5, 500, 300},
  {NOTE_FS6, 500, 500},
  {NOTE_FS6, 500, 500},
  {NOTE_E6, 800, 1000},

  {NOTE_A5, 500, 300},
  {NOTE_B5, 500, 300},
  {NOTE_D6, 500, 300},
  {NOTE_B5, 500, 300},
  {NOTE_A6, 500, 500},
  {NOTE_CS6, 500, 500},
  {NOTE_D6, 500, 500},
  {NOTE_CS6, 500, 300},
  {NOTE_B5, 800, 1000},

  {NOTE_A5, 500, 300},
  {NOTE_B5, 500, 300},
  {NOTE_D6, 500, 300},
  {NOTE_B5, 500, 300},
  {NOTE_D6, 500, 300},
  {NOTE_E6, 500, 300},
  {NOTE_CS6, 500, 300},
  {NOTE_A5, 500, 500},
  {NOTE_A5, 500, 500},
  {NOTE_E6, 500, 500},
  {NOTE_D6, 500, 800},
};
 
void setup() {
 
}
 
void loop() {  
  for (int thisNote = 0; thisNote < (sizeof(melody) / sizeof(melody[0])); thisNote++) {
    tone(PIN, melody[thisNote][0], melody[thisNote][1]);

    delay(melody[thisNote][2]);
  }

  delay(3000);
}