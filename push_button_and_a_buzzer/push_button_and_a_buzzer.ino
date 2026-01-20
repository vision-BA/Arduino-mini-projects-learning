int buttonPin = 2;
int buzzerPin = 8;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {   // NOT pressed
    digitalWrite(buzzerPin, LOW);
  } else {                     // PRESSED
    digitalWrite(buzzerPin, HIGH);
  }
}
