/**
 * Simple Read
 * 
 * Read data from the serial port and change the color of a rectangle
 * when a switch connected to a Wiring or Arduino board is pressed and released.
 * This example works with the Wiring / Arduino program that follows below.
 */


import processing.serial.*;

Serial myPort;  // Create object from Serial class
int val = 0;      // Data received from the serial port

void setup() 
{
  size(400, 500);
  // I know that the first port in the serial list on my mac
  // is always my  FTDI adaptor, so I open Serial.list()[0].
  // On Windows machines, this generally opens COM1.
  // Open whatever port is the one you're using.
  printArray(Serial.list());
  String portName = Serial.list()[1];
  myPort = new Serial(this, portName, 9600);
}

void draw()
{
  if ( myPort.available() > 0) {  // If data is available,
    val = myPort.read();         // read it and store it in val
    println(val);
  }
  background(255);             // Set background to white
  if (val < 85) {              // If the serial value is 0 - 85,
    fill(32, 201, 77);                   // set fill to green
  } 
  else if (val < 170)  {                       // If the serial value is 86 - 170,
    fill(33, 191, 189);                 // set fill to cyan
  }
    else {                               // if the serial value is not anything of the above
      fill(227, 224, 43);                // set fill to yellow
  }
  rect(100, val, 200, val);
}



/*

// Wiring / Arduino Code
// Code for sensing a switch status and writing the value to the serial port.
// modificado por Jota
//2023 con perilla

int pinPerilla = A0;                       // Switch connected to perilla
int valorPerilla = -1;

void setup() {
  Serial.begin(9600);                    // Start serial communication at 9600 bps
}

void loop() {
valorPerilla = analogRead(pinPerilla);

Serial.write(valorPerilla);
  delay(100);                            // Wait 100 milliseconds
}

*/
