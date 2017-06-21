#include <Servo.h>
Servo myservo;
int pos = 180;

int buttonState = 0;

int val = 9999;
void setup() {
  myservo.attach(9);
  Serial.begin(38400);
}

void loop() {
  val = Serial.read();
  Serial.println(val);
  if (Serial.read() == '1') {/*
    for (pos = 0; pos < 180; pos += 1) {
      myservo.write(pos);
      delay(5);
    }
*/
/*
    for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }*/
    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }

  }

  if (Serial.read() == '0') {
    //pos = 179;
    //myservo.write(pos);
    }
  //delay(100);
}
