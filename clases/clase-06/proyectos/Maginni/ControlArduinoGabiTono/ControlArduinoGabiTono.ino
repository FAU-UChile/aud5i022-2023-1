//Antonio Ceron
//Gabriela Echenique

// Cronometro de secuencia led accionado mediante a un pulsor

// variable para almacenar estado pulsador
int estadoPulsador = 0;

int pinPulsador = 6;

// variable para conectar LED
int pinLED1 = 8;
int pinLED2 = 9;
int pinLED3 = 10;
int pinLED4 = 7;

void setup() {

  pinMode(pinPulsador, INPUT);

  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
  pinMode(pinLED4, OUTPUT);

  // Abrir comunicacion serial
  Serial.begin(9600);
}

void loop() {

  estadoPulsador = digitalRead(pinPulsador);
  Serial.println(estadoPulsador);

// Se configura para que la secuencia ocurra solo al presionarse el pulsador
  if (estadoPulsador == HIGH) {
    //se enciende la primera luz durante un segundo
    digitalWrite(pinLED1, HIGH);  // enciende
    digitalWrite(pinLED2, LOW);   // apaga
    digitalWrite(pinLED3, LOW);   // apaga
    digitalWrite(pinLED4, LOW);   // apaga
    delay(1000);


    // se apaga la primera luz y se enciende la segunda
    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED2, HIGH);
    digitalWrite(pinLED3, LOW);
    digitalWrite(pinLED4, LOW);
    delay(1000);

    // se apaga la segunda luz y se enciende la tercera 
    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED3, HIGH);
    digitalWrite(pinLED4, LOW);
    delay(1000);
    // se apaga la tercera luz y se enciende la cuarta
    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED3, LOW);
    digitalWrite(pinLED4, HIGH);
    delay(1000);

    // En caso de no apretar el pulsador todas las luces permaneceran apagadas
  } else {
    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED3, LOW);
    digitalWrite(pinLED4, LOW);
  }
}
