int sw = 4;               //boton o interruptor a pin4
int perilla = A0;         //perilla a A0
int valorPerilla;         //datos que manda la perilla
int posicion;             //para datos modificados de la perilla

void setup() {
 pinMode(sw, INPUT);             // Set pin 0 as an input
  Serial.begin(9600);            // Start serial communication at 9600 bps
}

void loop() {

valorPerilla = analogRead(perilla);            //lectura perilla
posicion = map(valorPerilla, 0, 1023, 2, 100); //traducir valores de perilla a 2 y 100 y nuevo nombre a posicion
Serial.write(posicion);                        //mandar datos de valor posicion a la serial

delay(80);

if (digitalRead(sw) == HIGH) {  // If switch is ON,
    Serial.write(1);               // send 1 to Processing
  } else {                               // If the switch is not ON,
    Serial.write(0);               // send 0 to Processing
  }
  delay(80);
  }                            // Wait 80 milliseconds

