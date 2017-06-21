const int buttonPin = 2;

int buttonState = 0;
void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(38400);
}
void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    Serial.write('1');
  }else{
    Serial.write('0');
  }
}
