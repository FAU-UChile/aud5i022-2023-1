// ej_02_pulsador_luz_intermitente_delay
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

// variable para intervalo de intermitencia
int intervalo = 1000;

void setup() {

  // definir pin lectura como entrada digital
  pinMode(pinLectura, INPUT);

  // definir pin LED como salida digital
  pinMode(pinLED, OUTPUT);

}

void loop() {

  // leer pin y actualizar variable interna
  estadoPulsador = digitalRead(pinLectura);

  // si pulsador esta presionado
  if (estadoPulsador == HIGH) {

    // prender LED y esperar
    estadoLED = HIGH;
    digitalWrite(pinLED, estadoLED);
    delay(intervalo);

    // apagar LED y esperar
    estadoLED = LOW;
    digitalWrite(pinLED, estadoLED);
    delay(intervalo);
  }

  // si pulsador no esta presionado
  else {

    // apagar LED y esperar
    estadoLED = LOW;
    digitalWrite(pinLED, estadoLED);
    delay(intervalo);

  }

}
