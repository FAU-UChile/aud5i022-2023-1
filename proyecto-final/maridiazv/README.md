probandoooo
Estoy trabajando con [sofiachaav](https://github.com/sofiachaav)
codigo:

#include<Servo.h>
Servo myServo;
int const potPin = A0;
int potVal;
int angle;

void setup() {
  // put your setup code here, to run once:
 myServo.attach(9);

 Serial.begin(9600);

}

void loop() {
  potVal = analogRead(potPin);
  Serial.print("potVal: ");
  Serial.print(potVal);
  angle = map(potVal, 0, 1023, 0, 179);
  Serial.print(", angle: ");
  Serial.print(angle);
  myServo.write(angle);
  delay(15);

  // put your main code here, to run repeatedly:

}


// codigo final sin limpiar 16-06-2023
#include<Servo.h>
Servo myServo;
//int const potPin = A0;
int potVal;
int angle;
int modo = 0;
int estadoBoton = 0;
int estadoBotonPrevio = 0;

// variables para movimiento del servo
int anguloActual = 0;
int anguloPasito = 10;
int anguloDireccion = 1;
int anguloMinimo = 0;
int anguloMaximo = 179;
int anguloPausa = 15;

void setup() {
  // put your setup code here, to run once:
 myServo.attach(8);

 Serial.begin(9600);

}

void loop() {

/*
  toggle 
  potVal = analogRead(potPin);
  Serial.print("potVal: ");
  Serial.print(potVal);
  angle = map(potVal, 0, 1023, 0, 179);
  Serial.print(", angle: ");
  Serial.print(angle);
  myServo.write(angle);
  delay(15);

  // put your main code here, to run repeatedly:
*/
estadoBoton = digitalRead(2);

if(estadoBoton == 1 && estadoBotonPrevio == 0){
  if(modo == 0){
    modo = 1;
  }
  else if(modo == 1){
    modo = 0;
  }
}
estadoBotonPrevio = estadoBoton;

if(modo == 1){
  // moverse a ese lugar
  myServo.write(anguloActual);
  delay(anguloPausa);
  // actualizar para siguiente vez
  anguloActual = anguloActual + anguloDireccion * anguloPasito;

  if (anguloActual > anguloMaximo) {
    anguloDireccion = -1;

  }

   if (anguloActual < anguloMinimo) {
     anguloDireccion = 1;
  }

}
else if(modo == 0){

}

Serial.println(modo);
delay(50);

}
