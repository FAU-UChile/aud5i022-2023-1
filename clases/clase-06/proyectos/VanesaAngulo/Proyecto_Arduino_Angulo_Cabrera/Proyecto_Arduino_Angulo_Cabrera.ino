
// estas son las variables

int LED4 = 4;
int LED5 = 5;
int LED6 = 6;

int LED8 = 8;
int LED9 = 9;
int LED10 = 10;

int Boton1 = 2;

int estadoBoton = 0;
int estadoBotonPrevio = 0;

int Pausa = 50;

void setup() {
  //establecer el rol de cada participante

  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);

  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);

  pinMode(Boton1, INPUT);
  Serial.begin(9600);
}

void loop() {

  estadoBoton = digitalRead(Boton1);
  Serial.print(estadoBoton);
  Serial.println("");

  //Intento de hacer que el boton funcione como switch (mantener su valor 1 o 0 y solo cambiarlo al ser apretado)
  /*
  if(estadoBotonPrevio == LOW && estadoBoton == HIGH) {
    botonApretado = ~botonApretado;

    Serial.print("botonApretado: ");
    Serial.println(botonApretado);
    Serial.println("");
  }
    estadoBotonPrevio = estadoBoton;
  */

  //apagar todos los LEDS
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED8, LOW);
  digitalWrite(LED9, LOW);
  digitalWrite(LED10, LOW);

  //Patron de LED si el boton no es apretado
  if (estadoBoton == 0) {
    digitalWrite(LED4, HIGH);
    delay(Pausa);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, HIGH);
    delay(Pausa);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, HIGH);
    delay(Pausa);
    digitalWrite(LED6, LOW);
    digitalWrite(LED8, HIGH);
    delay(Pausa);
    digitalWrite(LED8, LOW);
    digitalWrite(LED9, HIGH);
    delay(Pausa);
    digitalWrite(LED9, LOW);
    digitalWrite(LED10, HIGH);
    delay(Pausa);
    digitalWrite(LED10, HIGH);
    delay(Pausa);
    digitalWrite(LED10, LOW);
    delay(Pausa);
    //Patron de LED si el boton esta siendo apretado
  } else {
    digitalWrite(LED10, HIGH);
    delay(Pausa);
    digitalWrite(LED10, LOW);
    digitalWrite(LED9, HIGH);
    delay(Pausa);
    digitalWrite(LED9, LOW);
    digitalWrite(LED8, HIGH);
    delay(Pausa);
    digitalWrite(LED8, LOW);
    digitalWrite(LED6, HIGH);
    delay(Pausa);
    digitalWrite(LED6, LOW);
    digitalWrite(LED5, HIGH);
    delay(Pausa);
    digitalWrite(LED5, LOW);
    digitalWrite(LED4, HIGH);
    delay(Pausa);
    digitalWrite(LED4, LOW);
    delay(Pausa);
  }
}
