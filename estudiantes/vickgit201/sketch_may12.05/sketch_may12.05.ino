// Wiring / Arduino Code
// Code for sensing a switch status and writing the value to the serial port.
// modificado por claveriavick
// en 2023 para uso con perilla

// antes era switch por pulsador, ahora es pin por perrila
// poner valor inicial, valor inicial que no exista ahí si es de 0 a 1023, será un valor que no sea capaz de darme


int pinPerilla = A0;    // Switch connected to pin 4 --> pinPerilla connected to A0
int valorPerilla = -1;  // si la perilla vale -1 es que nunca ha sido leída,
// si le pongo 0 nunca sabré si es porque en verdad nunca lo leyó o porque esta a lo max de la izquierda

void setup() {

  Serial.begin(9600);  // Start serial communication at 9600 bps
}

void loop() {

  valorPerilla = 1023 - analogRead(pinPerilla);

  Serial.write(valorPerilla);


  delay(100);  // Wait 100 milliseconds
}
