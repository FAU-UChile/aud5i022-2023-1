// ej_03_pulsador_luz_intermitente
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19

// variable para leer info
int pinLectura = 7;

// variable para almacenar estado pulsador
int estadoPulsador = 0;

// variable para conectar LED
int pinLED = 6;

// variable para estado LED
int estadoLED = 0;

// variable para pausa de intermitencia
const long intervalo = 1000;

unsigned long tiempoAnterior = 0;
unsigned long tiempoActual = 0;

void setup() {

  // definir pin lectura como entrada digital
  pinMode(pinLectura, INPUT);

  // definir pin LED como salida digital
  pinMode(pinLED, OUTPUT);

}

void loop() {

  // leer pin y actualizar variable interna
  estadoPulsador = digitalRead(pinLectura);

  // si el boton no esta presionado
  if (estadoPulsador == LOW) {
    estadoLED = LOW;
    digitalWrite(pinLED, estadoLED);
  }

  // si el boton esta presionado
  else {

    // actualizar tiempo actual
    tiempoActual = millis();

    // comprobar si tiempo transcurrido es mayor que intervalo
    if (tiempoActual - tiempoAnterior >= intervalo) {

      // actualizar tiempo previo
      tiempoAnterior = tiempoActual;

      estadoLED = !estadoLED;
      digitalWrite(pinLED, estadoLED);

    }

  }

}
