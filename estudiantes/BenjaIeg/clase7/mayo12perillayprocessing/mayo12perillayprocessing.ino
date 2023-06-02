// Wiring / Arduino Code
// Code for sensing a switch status and writing the value to the serial port.
//modificado por Benja y guiado por motoya

int pinPerilla = A0;                       // Switch conectado pin analogo 0
int valorPerilla = -1;


void setup() {
  Serial.begin(9600);                    // Start serial communication at 9600 bps
}

void loop() {

  valorPerilla = analogRead(pinPerilla); //si se quiere dar vuelta los valores extremos que muestra la perilla, cambiar los cables pos y neg de la perilla

  Serial.write(valorPerilla);

  delay(100);                            // Wait 100 milliseconds
}