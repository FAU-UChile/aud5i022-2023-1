/**
 * Simple Read
 * 
 * Read data from the serial port and change the color of a rectangle
 * when a switch connected to a Wiring or Arduino board is pressed and released.
 * This example works with the Wiring / Arduino program that follows below.
 */


import processing.serial.*;

Serial myPort;  // Create object from Serial class
int val;      // Data received from the serial port
color rosapink = color(245, 66, 245);
color celeste = color(50, 237, 237);
color coral = color(237, 97, 50);
color amarillo = color(247, 230, 69);
color verde = color(39, 227, 133);
color indigo = color(80, 39, 227);

void setup() 
{
  size(200, 200);
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

// val1: se desplaza en eje x ; val2: se desplaza en eje y; val3: cambia de ancho; val4: cambia de largo
//fill cambia el color de relleno de la figura que va justo despues de este.
    fill(rosapink);
    rect(val, 50, 100, val);  
    fill(coral);
    rect(50, 50, val, 100);
    fill(indigo);
    star(50, val, val, 100, 50);
    fill(amarillo);
    ellipse(50, 50, 100, val);
    fill(celeste);
    rect(50, val, 100, 100);
    fill(verde);
    ellipse(val, val, val, 100);

}

void star(float x, float y, float radius1, float radius2, int npoints) {
  float angle = TWO_PI / npoints;
  float halfAngle = angle/2.0;
  beginShape();
  for (float a = 0; a < TWO_PI; a += angle) {
    float sx = x + cos(a) * radius2;
    float sy = y + sin(a) * radius2;
    vertex(sx, sy);
    sx = x + cos(a+halfAngle) * radius1;
    sy = y + sin(a+halfAngle) * radius1;
    vertex(sx, sy);
  }
  endShape(CLOSE);
}
