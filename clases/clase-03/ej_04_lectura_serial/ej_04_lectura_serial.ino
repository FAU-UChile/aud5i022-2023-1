// ej_04_lectura_serial
// por montoyamoraga
// v0.0.2 marzo 2023
// hecho con Arduino Uno y IDE 2.0.4

// variable para almacenar entrada
int byteEntrada;

// setup() ocurre una vez, al principio
void setup() {

  // iniciar comunicacion serial
  Serial.begin(9600);

}

// loop() ocurre en bucle, despues de setup()
void loop() {

  // revisar si existen bytes disponibles en el puerto serial
  if (Serial.available() > 0) {
    
    // leer un byte con Serial
    // almacenar esa lectura en la variable
    byteEntrada = Serial.read();

    // imprimir mensaje de recibido
    Serial.print("recibido: ");
    
    // imprimir bit de entrada en decimal
    // imprimir nueva linea
    Serial.println(byteEntrada, DEC);
  }
  
}
