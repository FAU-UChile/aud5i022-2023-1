// Wiring / Arduino Code
// Code for sensing a switch status and writing the value to the serial port.

int Perilla = A0;
int valorPerilla = -1;

void setup() {

  Serial.begin(9600);        

}

void loop() {

valorPerilla = analogRead(Perilla);
Serial.write(valorPerilla/4);

delay(100);                            // Wait 100 milliseconds

}
