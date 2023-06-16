//En base al trabajo realizado en el archivo LuzySensor.ino.
//Vamos a agregar la funcionalidad de avisador de sonido, utilizando un buzzer.
const int PinLedVerde = 10;  //asignamos el pin al color verde.
const int PinLedRojo = 9;
const int PinLedAzul = 11;
const int pinBuzzer = 6;

int ValorRojo = 400;  //asignamos un valor númerico al treshold para Rojo.
int ValorVerde = 500;
int ValorAzul = 600;
int ValorBlanco = 700;


int valorLDR = 0;  //Creamos la variable de tipo número entero para almacenar los datos recogidos del sensor analógico LDR (Light Dependant Resitor).
int pinLDR = A0;     //Seleccionamos el pin analógico A0 como input del sensor LDR.

void setup() {

  pinMode(PinLedVerde, OUTPUT);
  pinMode(PinLedRojo, OUTPUT);
  pinMode(PinLedAzul, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);

  Serial.begin(9600);
}
void loop() {
  valorLDR = analogRead(pinLDR);  //Leemos el valor del pinLDR y lo guardamos en la variable creada.
  Serial.println(valorLDR);       //Imprimimos dicho valor, comprendido entre 0 y 1023.

  //queremos que conforme a la distancia que perciba el sensor, en base a la diferencia de luz, sea distinto el color que emite el Led.
  //vamos a intentar que, comparando el ValorLDR a los valores que establecimos antes, esto funcione.
  if (valorLDR <= ValorRojo) {
    analogWrite(PinLedRojo, 20);
    analogWrite(PinLedVerde, 0);
    analogWrite(PinLedAzul, 0);
    analogWrite(pinBuzzer, 0);

  } else if (valorLDR <= ValorVerde) {
    analogWrite(PinLedRojo, 0);
    analogWrite(PinLedVerde, 20);
    analogWrite(PinLedAzul, 0);
    analogWrite(pinBuzzer, 80);
  } else if (valorLDR <= ValorAzul) {
    analogWrite(PinLedRojo, 0);
    analogWrite(PinLedVerde, 0);
    analogWrite(PinLedAzul, 70);
    analogWrite(pinBuzzer, 300);
  } else {
    analogWrite(PinLedRojo, 100);
    analogWrite(PinLedVerde, 100);
    analogWrite(PinLedAzul, 100);
    analogWrite(pinBuzzer, 700);
  }
}