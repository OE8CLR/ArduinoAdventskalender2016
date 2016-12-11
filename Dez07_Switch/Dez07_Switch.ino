int ledPin    = 7;
int analogPin = 5;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {

  int input = analogRead(analogPin);

  if (input < 200) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  
}
