probandoooo
Estoy trabajando con [sofiachaav](https://github.com/sofiachaav)
codigo:

#include<Servo.h>
Servo myServo;
int const potPin = A0;
int potVal;
int angle;

void setup() {
  // put your setup code here, to run once:
 myServo.attach(9);

 Serial.begin(9600);

}

void loop() {
  potVal = analogRead(potPin);
  Serial.print("potVal: ");
  Serial.print(potVal);
  angle = map(potVal, 0, 1023, 0, 179);
  Serial.print(", angle: ");
  Serial.print(angle);
  myServo.write(angle);
  delay(15);

  // put your main code here, to run repeatedly:

}
