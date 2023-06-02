
// Code for sensing a switch status and writing the value to the serial port.
//codigo modificado por mi, sofia chavez, mayo 2023
int pinPerillita = A0;                       // Switch connected to pin 4
int valorPerillita = -1;


void setup() {

  Serial.begin(9600);                    // Start serial communication at 9600 bps
}

void loop() {
valorPerillita = analogRead (pinPerillita);
Serial.write(valorPerillita);


  delay(100);                            // Wait 100 milliseconds
}