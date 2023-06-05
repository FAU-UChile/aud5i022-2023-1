// Wiring / Arduino Code
// Code for sensing a switch status and writing the value to the serial port.
//modificado por mi el bakano 2023
int pinPerilla = A0;

int valorPerilla = -1;

void setup() {
  Serial.begin(9600);                    // Start serial communication at 9600 bps
}

void loop() {
  valorPerilla = analogRead(pinPerilla);

  Serial.write(valorPerilla);

  delay(100);

}
