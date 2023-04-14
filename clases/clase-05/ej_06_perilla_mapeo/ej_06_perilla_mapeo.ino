// ej_03_perilla_mapeo

// potenciometro
// orientacion texto hacia derecha
// orientacion perilla hacia arriba
// conectar en columna e con pins:
// pin1 conectado a e5
// pin2 conectado a e6
// pin3 conectado a e7

// arduino uno
// 5V conectado a pin1 potenciometro (fila 5)
// A0 conectado a pin2 potenciometro (fila 6)
// GND conectado a pin3 potenciometro (fila 7)

int pinEntrada = A0;

int pinSalida = 13;

int valorSensor = 0;

int valorMin = 1024;
int valorMax = 0;

int rangoMin = 0;
int rangoMax = 255;

int valorMapeado = 0;

void setup() {
  pinMode(pinSalida, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  // actualizar valor sensor
  valorSensor = analogRead(pinEntrada);

  // actualizar valor minimo
  if (valorSensor < valorMin) {
    valorMin = valorSensor;
  }

  if (valorSensor > valorMax) {
    valorMax = valorSensor;
  }

  // mapear valor
  valorMapeado = map(valorSensor, valorMin, valorMax, rangoMin, rangoMax);

  // imprimir valores min y max
  Serial.print("actual, min, max, mapeado: ");
  Serial.print(valorSensor);
  Serial.print(", ");
  Serial.print(valorMin);
  Serial.print(", ");
  Serial.print(valorMax);
  Serial.print(", ");
  Serial.print(valorMapeado);
  Serial.println("");

}
