// ej_01_imprimir_string
// por montoyamoraga
// v0.0.2 marzo 2023
// hecho con Arduino Uno y IDE 2.0.4

// setup() ocurre una vez al principio
void setup() {
  
  // abrir puerto serial
  // 9600 es la velocidad de datos estandar
  Serial.begin(9600);

}

// loop() ocurre despues de setup(), en bucle
void loop() {
  
  // imprimir mensaje entre comillas y nueva linea
  Serial.println("hola :)");

}
