int potCentPin = A0;      //Pin analogico a pin a0
int potPinIzq = A1;      // Pin analógico a pin a1
int potPinDer = A2;    // Pin analogico a pin a2
int switchPin = 2; 
int switchPin2 = 8;     // Pin digital para el interruptor

int pulsPin = 6;
int pulsPin2 = 7;

int switchDSt = 0;
int switchISt = 0; 

int pulsSt = 0;
int puls2St= 0;

void setup() {
  Serial.begin(9600);
 pinMode(switchPin, INPUT_PULLUP);
pinMode(switchPin2, INPUT_PULLUP);
pinMode(pulsPin, INPUT);
pinMode(pulsPin2, INPUT);
}

void loop() {
  int potCentValue = analogRead(potCentPin);
  int potIzqVal = analogRead(potPinIzq);
  int potDerVal = analogRead(potPinDer);
  switchDSt = digitalRead(switchPin);
  switchISt = digitalRead(switchPin2);
  pulsSt = digitalRead(pulsPin);
  puls2St = digitalRead(pulsPin2);

  Serial.print(potCentValue);
  Serial.print(",");
  Serial.print(switchISt);
  Serial.print(",");
  Serial.print(potIzqVal);
  Serial.print(",");
  Serial.print(switchDSt);
  Serial.print(",");
  Serial.print(potDerVal);
  Serial.print(",");
  Serial.print(pulsSt);
  Serial.print(",");
  Serial.println(puls2St);

  delay(80);
}
