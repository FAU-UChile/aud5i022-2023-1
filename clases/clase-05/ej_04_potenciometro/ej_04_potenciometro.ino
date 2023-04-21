// ej_04_potenciometro
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19

// potenciometro
// orientacion texto hacia derecha
// orientacion perilla hacia arriba
// conectar en columna j con pins:
// pin1 conectado a j10
// pin2 conectado a j11
// pin3 conectado a j12

// arduino uno
// 5V conectado a pin1 potenciometro (fila 10)
// A0 conectado a pin2 potenciometro (fila 11)
// GND conectado a pin3 potenciometro (fila 12)

// variable para pin de lectura información análoga
int pinEntrada = A0;

// variable para valor sensor potenciómetro
int valorSensor = 0;

void setup() {
  
  // abrir puerto serial
  Serial.begin(9600);
  
}

void loop() {
  
  // actualizar valor sensor
  valorSensor = analogRead(pinEntrada);

  // imprimir valor sensor
  Serial.println(valorSensor);
}
