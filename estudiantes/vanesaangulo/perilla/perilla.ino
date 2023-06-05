

// Wiring / Arduino Code
// Code for sensing a switch status and writing the value to the serial port.
//Modificado por Vanesa Angulo 2023 uso de perila

int pinPerilla = A0;                       // Switch connected to pin 4
int valorPerilla = -1;

void setup() {
  Serial.begin(9600);                    // Start serial communication at 9600 bps
}

void loop() {
  
  valorPerilla = analogRead(pinPerilla);

Serial.write(valorPerilla);

  delay(100);                            // Wait 100 milliseconds
}

