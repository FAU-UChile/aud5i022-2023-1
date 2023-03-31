// ej_03_arrojar_dado
// por montoyamoraga
// v0.0.2 marzo 2023
// hecho con Arduino Uno y IDE 2.0.4

// valores minimos y maximos de dado
int minDado = 1;
int maxDado = 6;

// setup() ocurre una vez, al principio
void setup() {

  // iniciar comunicacion serial
  Serial.begin(9600);

}

// loop() ocurre en bucle, despues de setup
void loop() {

  // random() arroja valor aleatorio en [min, max[
  // el valor va entre minimo inlcuido, y maximo excludio
  int resultado = random(minDado, maxDado + 1);

  // imprimir texto
  Serial.print("dado: ");

  // imprimir resultado y nueva linea
  Serial.println(resultado);

  // esperar 1 segundo
  // el argumento de delay se mide en milisegundos
  delay(1000);
  
}
