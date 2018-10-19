int pins[] = {2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3, 2};
int arrSize = sizeof(pins) / sizeof(int);

void setup() {
  for (int i = 0; i < arrSize; i++) {
    pinMode(pins[i], OUTPUT);
  }
  thread
}

void loop() {
  for (int i = 0; i < arrSize; i++) {
    digitalWrite(pins[i], HIGH);
    //digitalWrite(pins[i+1], HIGH);
    if (i != 0) {
      delay(analogRead(0));
    }
    resetPins();
  }
}

void resetPins() {
  for (int i = 0; i < arrSize; i++) {
    digitalWrite(pins[i], LOW);
  }
}
