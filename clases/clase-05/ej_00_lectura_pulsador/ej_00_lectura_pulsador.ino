// ej_00_lectura_pulsador
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19

// variable para leer info
int pinLectura = 7;

// variable para almacenar estado pulsador
int estadoPulsador = 0;

// setup() ocurre una vez, al principio
void setup() {

  // definir pin lectura como entrada digital
  pinMode(pinLectura, INPUT);

  // abrir comunicacion serial
  Serial.begin(9600);

}

// loop() ocurre despues de setup(), en bucle
void loop() {

  // leer pin y actualizar variable interna
  estadoPulsador = digitalRead(pinLectura);

  // imprimir informacion por puerto serial
  Serial.println(estadoPulsador);

}
