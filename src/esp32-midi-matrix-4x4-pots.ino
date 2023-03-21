#include <BLEMIDI.h>

const int matrixSize = 16;
const int potCount = 4;

int matrix[matrixSize] = {
  36, 37, 38, 39,
  40, 41, 42, 43,
  44, 45, 46, 47,
  48, 49, 50, 51
};

int pots[potCount] = {
  0, 1, 2, 3
};

int potValues[potCount];

BLEMIDI *bleMIDI;

void setup() {
  Serial.begin(115200);
  
  for (int i = 0; i < potCount; i++) {
    pinMode(pots[i], INPUT);
  }
  
  bleMIDI = new BLEMIDI("ESP32-BLE-MIDI");
  bleMIDI->begin();
}

void loop() {
  // Read potentiometer values
  for (int i = 0; i < potCount; i++) {
    potValues[i] = analogRead(pots[i]) / 8;
  }
  
  // Send MIDI messages for button presses
  for (int i = 0; i < matrixSize; i++) {
    int row = i / 4;
    int col = i % 4;
    int note = matrix[i];
    
    if (digitalRead(pots[col]) == HIGH) {
      bleMIDI->sendNoteOn(note, potValues[row], 1);
    } else {
      bleMIDI->sendNoteOff(note, 0, 1);
    }
  }
}
