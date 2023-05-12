

// Wiring / Arduino Code
// Code for sensing a switch status and writing the value to the serial port.

int pinPerilla = A0;                       // Switch connected to pin 4
int valorPerilla = -1;

void setup() {
  Serial.begin(9600);                    // Start serial communication at 9600 bps
}

void loop() {


  valorPerilla = analogRead (pinPerilla);
  Serial.write(valorPerilla);
  delay(100);                            // Wait 100 milliseconds
}

