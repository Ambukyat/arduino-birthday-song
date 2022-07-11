//www.elegoo.com
//2016.12.08

#include "pitches.h"

//music note, duration, delay

int melody[][3] = {
  {NOTE_D5, 500, 500},
  {NOTE_D5, 500, 500},
  {NOTE_E5, 500, 500},
  {NOTE_D5, 500, 500},
  {NOTE_G5, 500, 500},
  {NOTE_FS5, 500, 1500},

  {NOTE_D5, 500, 500},
  {NOTE_D5, 500, 500},
  {NOTE_E5, 500, 500},
  {NOTE_D5, 500, 500},
  {NOTE_A5, 500, 500},
  {NOTE_G5, 500, 1500},

  {NOTE_D5, 500, 500},
  {NOTE_D5, 500, 500},
  {NOTE_D6, 500, 500},
  {NOTE_B5, 500, 500},
  {NOTE_G5, 500, 500},
  {NOTE_FS5, 500, 500},
  {NOTE_E5, 500, 1500},

  {NOTE_C6, 500, 500},
  {NOTE_C6, 500, 500},
  {NOTE_B5, 500, 500},
  {NOTE_G5, 500, 500},
  {NOTE_A5, 500, 500},
  {NOTE_G5, 500, 1500},
};
 
void setup() {
 
}
 
void loop() {  
  for (int thisNote = 0; thisNote < (sizeof(melody) / sizeof(melody[0])); thisNote++) {
    tone(8, melody[thisNote][0], melody[thisNote][1]);

    delay(melody[thisNote][2]);
  }

  delay(3000);
}