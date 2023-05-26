//Declaración de variables constantes


const int BOTON_4 = 6;
const int BOTON_3 = 7;
const int BOTON_2 = 8;
const int BOTON_1 = 9;
 int LED_4 = 2;
 int LED_3 = 3;
 int LED_2 = 4;
 int LED_1 = 5;


//Matriz de secuencia
int sequence [100];
//Longitud de la secuencia actual
int sequenceLength = 1;
//Indice actual de la secuencia
int currentIndex = 0;

void setup() {
  pinMode(BOTON_1, INPUT);
  pinMode(BOTON_2, INPUT);
  pinMode(BOTON_3, INPUT);
  pinMode(BOTON_4, INPUT);

  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);

  // Generar la primera secuencia
  randomSeed(analogRead(0));
  for (int i = 0; i < 100; i++) {
    sequence[i] = random(1, 5);
  }
}

void loop() {
  int i;
  for (i = 0 < sequenceLength; i++;) {
    if (sequence[i] != 2) {

    }
  }
  // Reproducir la secuencia actual
  for (int i = 0; i < sequenceLength; i++) {
    switch (sequence[i]) {
      case 1:
        digitalWrite(LED_1, HIGH);
        delay(500);
        digitalWrite(LED_1, LOW);
        break;
      case 2:
        digitalWrite(LED_2, HIGH);
        delay(500);
        digitalWrite(LED_2, LOW);
        break;
      case 3:
        digitalWrite(LED_3, HIGH);
        delay(500);
        digitalWrite(LED_3, LOW);
        break;
      case 4:
        digitalWrite(LED_4, HIGH);
        delay(500);
        digitalWrite(LED_4, LOW);
        break;
    }
    delay(200);
  }

  // Leer los botones pulsadores y comprobar si el usuario ha acertado la secuencia actual
  for (int i = 0; i < sequenceLength; i++) {
    int buttonPressed = 0;
    while (buttonPressed == 0) {
      if (digitalRead(BOTON_1) == LOW) {
        buttonPressed = 1;
        digitalWrite(LED_1, HIGH);
        delay(500);
        digitalWrite(LED_1, LOW);
        if (sequence[i] != 1) {
          // El usuario ha perdido
          sequenceLength = 1;
          currentIndex = 0;
          return;
        }
      }
    }
  }
      if (digitalRead(BOTON_2) == LOW) {
        int buttonPressed = 1;
        digitalWrite(LED_2, HIGH);
        delay(500);
        digitalWrite(LED_2, LOW);
        if (sequence[i] != 2);
      }
}