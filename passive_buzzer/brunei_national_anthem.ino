#include "pitches.h"

//Define Pins
#define PIN 8

//Song: Brunei National Anthem
//Brunei National Anthem on Arduino using passive buzzer. 
//music note, duration, delay

int melody[][3] = {
  {NOTE_G4, 800, 800},
  {NOTE_E4, 800, 800},
  {NOTE_D4, 1200, 1200},
  {NOTE_C4, 400, 400},

  {NOTE_C4, 1600, 1600},
  {NOTE_C4, 800, 800},
  {NOTE_D4, 800, 800},

  {NOTE_E4, 800, 800},
  {NOTE_F4, 800, 800},
  {NOTE_G4, 1600, 1600},

  {NOTE_C5, 800, 800},
  {NOTE_A4, 800, 800},
  {NOTE_G4, 800, 800},
  {NOTE_F4, 400, 400},
  {NOTE_E4, 400, 400},

  {NOTE_F4, 1600, 1600},
  {NOTE_G4, 800, 800},
  {NOTE_F4, 800, 800},

  {NOTE_E4, 800, 800},
  {NOTE_F4, 600, 600},
  {NOTE_E4, 200, 200},
  {NOTE_D4, 1600, 1600},

  {NOTE_G4, 800, 800},
  {NOTE_E4, 800, 800},
  {NOTE_D4, 1200, 1200},
  {NOTE_C4, 400, 400},

  {NOTE_C4, 1600, 1600},
  {NOTE_C4, 800, 800},
  {NOTE_E4, 800, 800},

  {NOTE_F4, 800, 800},
  {NOTE_G4, 800, 800},
  {NOTE_A4, 1600, 1600},

  {NOTE_C5, 800, 800},
  {NOTE_B4, 800, 800},
  {NOTE_A4, 800, 800},
  {NOTE_G4, 400, 400},
  {NOTE_F4, 400, 400},

  {NOTE_E4, 1600, 1600},
  {NOTE_F4, 800, 800},
  {NOTE_A4, 800, 800},

  {NOTE_G4, 800, 800},
  {NOTE_E4, 800, 800},
  {NOTE_D4, 1600, 1600},

  {NOTE_C4, 800, 800},
  {NOTE_E4, 800, 800},
  {NOTE_F4, 800, 800},
  {NOTE_G4, 800, 800},

  {NOTE_A4, 1600, 1600},
  {NOTE_F4, 800, 800},
  {NOTE_A4, 800, 800},

  {NOTE_G4, 800, 800},
  {NOTE_F4, 400, 400},
  {NOTE_E4, 400, 400},
  {NOTE_F4, 1600, 1600},

  {NOTE_A4, 800, 800},
  {NOTE_G4, 800, 800},
  {NOTE_F4, 800, 800},
  {NOTE_B4, 600, 600},
  {NOTE_B4, 200, 200},

  {NOTE_C5, 1600, 1600},
  {NOTE_A4, 800, 800},
  {NOTE_F4, 800, 800},

  {NOTE_E4, 1600, 1600},
  {NOTE_G4, 1600, 1600},

  {NOTE_D4, 1600, 1600},
  {NOTE_B3, 1600, 1600},

  {NOTE_C4, 3200, 3200},
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