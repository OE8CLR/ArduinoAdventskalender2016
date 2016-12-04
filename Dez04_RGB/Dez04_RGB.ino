int ledPinBlue = 9;
int ledPinRed = 12;
int ledPinGreen = 10;

void setup() {
  pinMode(ledPinBlue, OUTPUT);
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
}

void loop() {

  int holdTime = 1000;

  // BLUE (BlueLED)
  digitalWrite(ledPinBlue, HIGH);
  delay(holdTime);

  // VIOLET (BlueLED + RedLED)
  digitalWrite(ledPinRed, HIGH);
  delay(holdTime);

  // RED (RedLED)
  digitalWrite(ledPinBlue, LOW);
  delay(holdTime);

  // YELLOW (RedLED + GreenLED)
  digitalWrite(ledPinGreen, HIGH);
  delay(holdTime);

  // GREEN (GreenLED)
  digitalWrite(ledPinRed, LOW);
  delay(holdTime);

  // Turquoise (GreenLED + BlueLED)
  digitalWrite(ledPinBlue, HIGH);
  delay(holdTime);
  
  // RESET
  digitalWrite(ledPinGreen, LOW);
  digitalWrite(ledPinBlue, LOW);
  delay(holdTime);
  
}
