// Wiring / Arduino Code
// Code for sensing a switch status and writing the value to the serial port.
// modificado por AndresMartinM
// para perilla

int knobPin = A0;                      // Switch connected to pin 4
int valorPerilla = -1;

void setup() {             // Set pin 0 as an input
  Serial.begin(9600);                    // Start serial communication at 9600 bps
}

void loop() {
  
  valorPerilla = analogRead(knobPin);

  Serial.write(valorPerilla/4);

  delay(100);                            // Wait 100 milliseconds
}