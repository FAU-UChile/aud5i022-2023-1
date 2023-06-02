/*
  Trabajo del Electivo Mención I y S: Diseño de interfaz electrónica mediante Arduino

  Impartido por Aaron Montoya e Ignacio Passalacqua

  Primer semestre 2023

  28 de abril


  Grupo integrado por Valentina Matthey y Joaquín Pérez

  Inspirado en el código "For Loop Iteration (aka The Knight Rider)" del control multiple de LEDs con un loop

  Creado en el 2006

  Por David A. Mellis

  modificado el 30 de agosto de 2011

  por Tom Igoe

  El circuito:

  - LEDs de los pins 2 a 7 a tierra

  Este código de ejemplo es de dominio público.

  https://www.arduino.cc/built-in-examples/ForLoopIteration

*/

// Tiempo de retraso (A mayor el número, más lento el ritmo)
int timer = 100;
int estadoPerilla;
int luz;

void setup() {

  Serial.begin(9600);

  // usar loop para iniciar cada luz como salida (output):

  for (int thisPin = 2; thisPin < 8; thisPin = thisPin + 1) {

    pinMode(thisPin, OUTPUT);

  }
}

void loop() {

  // uso de potenciómetro
  estadoPerilla = analogRead(A0);

  luz = estadoPerilla / 4;

  // loopear del pin más bajo al mayor, con la siguiente secuencia:

  for (int thisPin = 2; thisPin < 8; thisPin = thisPin + 1) {

    // encender la luz:

    analogWrite(thisPin, HIGH);

    // retraso de lo señalado en timer

    delay(timer);

    // apagar la luz:

    analogWrite(thisPin, LOW);

  }

  // loopear del pin más alto al más bajo:

  for (int thisPin = 7; thisPin >= 2; thisPin = thisPin - 1) {

    // encender la luz:

    analogWrite(thisPin, HIGH);

    // retraso de lo señalado en timer

    delay(timer);

    // apagar la luz:

    analogWrite(thisPin, LOW);

    // lectura de intensidad de luz por potenciómetro

    analogWrite(thisPin, luz);

  }
}