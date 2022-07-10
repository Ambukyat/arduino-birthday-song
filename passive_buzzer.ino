//www.elegoo.com
//2016.12.08

#include "pitches.h"
 
// notes in the melody: 
int melody_line_a[] = {
  NOTE_D5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_G5, NOTE_FS5  
};

int melody_line_b[] = {
  NOTE_D5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_A5, NOTE_G5  
};

int melody_line_c[] = {
  NOTE_D5, NOTE_D5, NOTE_D6, NOTE_B5, NOTE_G5, NOTE_FS5, NOTE_E5
};

int melody_line_d[] = {
  NOTE_C6, NOTE_C6, NOTE_B5, NOTE_G5, NOTE_A5, NOTE_G5
};
  
int duration = 500;  // 500 miliseconds
 
void setup() {
 
}
 
void loop() {  
  for (int thisNote = 0; thisNote < 6; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    tone(8, melody_line_a[thisNote], duration);
     
    // Output the voice after several minutes
    delay(500);
  }
  delay(1000);
  for (int thisNote = 0; thisNote < 6; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    tone(8, melody_line_b[thisNote], duration);
     
    // Output the voice after several minutes
    delay(500);
  }
  delay(1000);
  for (int thisNote = 0; thisNote < 7; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    tone(8, melody_line_c[thisNote], duration);
     
    // Output the voice after several minutes
    delay(500);
  }
  delay(1000);
   for (int thisNote = 0; thisNote < 6; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    tone(8, melody_line_d[thisNote], duration);
     
    // Output the voice after several minutes
    delay(500);
  }
   
  // restart after two seconds 
  delay(2000);
}
