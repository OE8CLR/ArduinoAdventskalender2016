int ledPinRed = 5;
int ledPinYellow = 8;
int ledPinGreen = 11;

void setup() {
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinYellow, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
}

void loop() {
  digitalWrite(ledPinRed, HIGH);
  delay(3000);
  digitalWrite(ledPinYellow, HIGH);
  digitalWrite(ledPinRed, LOW);
  delay(1000);
  digitalWrite(ledPinYellow, LOW);
  digitalWrite(ledPinGreen, HIGH);
  delay(3000);
  digitalWrite(ledPinGreen, LOW);
  delay(500);
  digitalWrite(ledPinGreen, HIGH);
  delay(500);
  digitalWrite(ledPinGreen, LOW);
  delay(500);
  digitalWrite(ledPinGreen, HIGH);
  delay(500);
  digitalWrite(ledPinGreen, LOW);
  delay(500);
  digitalWrite(ledPinGreen, HIGH);
  delay(500);
  digitalWrite(ledPinGreen, LOW);
  delay(500);
  digitalWrite(ledPinGreen, HIGH);
  delay(500);
  digitalWrite(ledPinGreen, LOW);
}
