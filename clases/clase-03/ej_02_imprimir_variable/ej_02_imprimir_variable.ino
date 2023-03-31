// ej_02_imprimir_variable
// por montoyamoraga
// v0.0.2 marzo 2023
// hecho con Arduino Uno y IDE 2.0.4

// declarar variable con nombre x
// y asignar valor inicial 0
int x = 0;

// setup() ocurre una vez al principio
void setup() {

  // abrir comunicacion serial
  Serial.begin(9600);

}


// loop() ocurre despues de setup(), en bucle
void loop() {

  // imprimir valor actual de variable x
  // imprimir nueva linea
  Serial.println(x);
  
  // aumentar valor de x en 1
  x = x + 1;

}
