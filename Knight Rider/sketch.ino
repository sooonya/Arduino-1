int pins[] = {2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3, 2}; // pin animation
int arrSize = sizeof(pins) / sizeof(int);

bool enablePotentiometer = true;
int potentiometerPin = 0;
int delayms = 100;

void setup() {
  // loop through pin array and initialize them
  for (int i = 0; i < arrSize; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  // loop through each pin in array and write high
  for (int i = 0; i < arrSize; i++) {
    digitalWrite(pins[i], HIGH);
    //digitalWrite(pins[i+1], HIGH); // uncomment this if you want two lights at once
    if (i != 0) {
      if (enablePotentiometer) {
        delay(analogRead(0));
      } else {
        delay(delayms);
      }
    }
    resetPins();
  }
}

void resetPins() {
  // loop through each pin in array and write low 
  for (int i = 0; i < arrSize; i++) {
    digitalWrite(pins[i], LOW);
  }
}
