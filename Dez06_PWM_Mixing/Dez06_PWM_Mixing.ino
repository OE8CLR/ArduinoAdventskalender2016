int ledPinRed   = 6;
int ledPinGreen = 5;
int ledPinBlue  = 3;

void setup() {
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
  pinMode(ledPinBlue, OUTPUT);
}

void loop() {

  int loopMax  = 100;
  int loopStep = 5;
  
  for (int i = 0; i <= loopMax; i+= loopStep) {
    analogWrite(ledPinRed, i);
    analogWrite(ledPinGreen, loopMax - i);
    delay(25);
  }

  for (int i = 0; i <= loopMax; i+= loopStep) {
    analogWrite(ledPinBlue, i);
    analogWrite(ledPinRed, loopMax - i);
    delay(25);
  }

  for (int i = 0; i <= loopMax; i+= loopStep) {
    analogWrite(ledPinGreen, i);
    analogWrite(ledPinBlue, loopMax - i);
    delay(25);
  }

}
