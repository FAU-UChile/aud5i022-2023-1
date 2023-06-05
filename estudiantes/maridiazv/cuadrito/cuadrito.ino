
int pinPerilla = A0;                       // Switch connected to pin 4
int valorPerilla = -1;


void setup() {
  
  Serial.begin(9600);
}

void loop() {

  valorPerilla = analogRead(pinPerilla);

  Serial.write(valorPerilla);
  delay(100);                            // Wait 100 milliseconds
}