/**
 * Simple Read
 * 
 * Read data from the serial port and change the color of a rectangle
 * when a switch connected to a Wiring or Arduino board is pressed and released.
 * This example works with the Wiring / Arduino program that follows below.
 */


import processing.serial.*;

Serial myPort;  // Create object from Serial class
int val = 1;      // Data received from the serial port

void setup() 
{
  size(400, 400);
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
  background(#1000FF);             // Set background to pink
  fill(#FF1A57);
  rect(val, 50, 100, 100);
}


/*

  Añadir a proximo codigo este fantasma de Pacman (como experimento)
  
  //PACMAN by Giovanni Magnani
background(0);
size(400,400);
  
  //Estas 3 secciones son para el fantasma

//este es el cuerpo del fantasma: medio círculo+rectángulo+varios triángulo
fill(225,60,229);
arc(310,190,60,60,PI,TWO_PI);
rect(280,190,60,30);
triangle(280,220,295,220,280,235);
triangle(295,220,310,220,295+7.5,235);
triangle(310,220,325,220,317.5,235);
triangle(325,220,340,220,340,235);

//ojos
fill(255,255,255);
ellipse(295,185,15,15);
ellipse(325,185,15,15);

//pupilas
fill(0);
ellipse(291,185,8,8);
ellipse(321,185,8,8);

*/


/*

// Wiring / Arduino Code
// Code for sensing a switch status and writing the value to the serial port.

int switchPin = 4;                       // Switch connected to pin 4

void setup() {
  pinMode(switchPin, INPUT);             // Set pin 0 as an input
  Serial.begin(9600);                    // Start serial communication at 9600 bps
}

void loop() {
  if (digitalRead(switchPin) == HIGH) {  // If switch is ON,
    Serial.write(1);               // send 1 to Processing
  } else {                               // If the switch is not ON,
    Serial.write(0);               // send 0 to Processing
  }
  delay(100);                            // Wait 100 milliseconds
}

*/
