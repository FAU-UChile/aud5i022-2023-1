// Reproductor Arduino de Escalas musicales de la nota DO
// Integrantes: Antonio Ceron - Gabriela Echenique - Joaquin Suazo

// Este codigo sirve para reproducir en un buzzer a una frecuencia de 440 hz las escalas [ DO Jonica - DO Eolica - DO Locria ] mediante el uso de un potenciometro y botones. 
// Al presionar alguno de los botones y desplazarse por el rango de el potenciometro, se reproduciran las notas de la escala, las cuales, apareceran en el monitor serial en el formato: Nota (Escala) (ValorPotenciometro)

// Materiales: 1 Placa Arduino Uno - 1 Protoboard - 1 Potenciometro - 1 Buzzer 3V - 3 Botones - 2 Cables Rojos - 6 Cables Verdes - 4 Cables Amarillos - 1 Cable Blanco
// Software: Arduino IDE 2.1.0 

// Definicion de pines
const int pinPotenciometro = A0;
const int pinBoton1 = 11;
const int pinBoton2 = 10;
const int pinBoton3 = 9;
const int pinBuzzer = 12;

// Variables
int nota = 0;
int notaAnterior = -1; // Nota anterior del potenciometro
int valorPotenciometro = 0;
bool botonPresionado1 = false;
bool botonPresionado2 = false;
bool botonPresionado3 = false;

// Frecuencias de la escala Jonica
float frecuenciasJonica[] = {261.63, 293.66, 329.63, 349.23, 392.00, 440.00, 493.88, 523.25};

// Frecuencias de la escala Eolica
float frecuenciasEolica[] = {261.63, 293.66, 311.13, 349.23, 392.00, 415.30, 466.16, 523.25};

// Frecuencias de la escala Locria
float frecuenciasLocria[] = {261.63, 	277.18, 311.13, 349.23, 369.99, 415.30, 466.16, 523.25};

void setup() {
  pinMode(pinBoton1, INPUT_PULLUP);
  pinMode(pinBoton2, INPUT_PULLUP);
  pinMode(pinBoton3, INPUT_PULLUP);
  pinMode(pinBuzzer, OUTPUT);
  Serial.begin(9600); // Iniciar comunicacion serial
}

void loop() {
  // Leer el valor del potenciometro
  valorPotenciometro = analogRead(pinPotenciometro);
 
  // Mapear el valor del potenciometro a una nota musical
  if (valorPotenciometro < 1 * 1023 / 7) {
    nota = 0; // DO
  } else if (valorPotenciometro <2 * 1023 / 7 ) {
    nota = 1; // RE
  } else if (valorPotenciometro <3 * 1023 / 7) {
    nota = 2; // MI
  } else if (valorPotenciometro < 4 * 1023 / 7) {
    nota = 3; // FA
  } else if (valorPotenciometro < 5 * 1023 / 7) {
    nota = 4; // SOL
  } else if (valorPotenciometro < 6 * 1023 / 7) {
    nota = 5; // LA
  } else if (valorPotenciometro < 7 * 1023 / 7) {
    nota = 6; // SI
  } else {
    nota = 7; // DO (valor máximo del potenciómetro)
  }

  // Verificar el estado del botón 1
  if (digitalRead(pinBoton1) == LOW) {
    if (!botonPresionado1 || nota != notaAnterior) {
      // Tocar la nota en el buzzer con la escala Jonica
      botonPresionado1 = true;
      tone(pinBuzzer, frecuenciasJonica[nota]); // Tocar la nota correspondiente en la escala Jonica
      notaAnterior = nota;
      Serial.print("Nota: ");
      switch (nota) {
        case 0:
          Serial.print("DO");
          break;
        case 1:
          Serial.print("RE");
          break;
        case 2:
          Serial.print("MI");
          break;
        case 3:
          Serial.print("FA");
          break;
        case 4:
          Serial.print("SOL");
          break;
        case 5:
          Serial.print("LA");
          break;
        case 6:
          Serial.print("SI");
          break;
        case 7:
          Serial.print("DO");
          break;
      }
      Serial.print(" (Jonica) (");
      Serial.print(valorPotenciometro);
      Serial.println(")");
    }
  } else {
    noTone(pinBuzzer); // Detener la reproduccion del buzzer
    botonPresionado1 = false;
    notaAnterior = -1;
  }
 
  // Verificar el estado del boton 2
  if (digitalRead(pinBoton2) == LOW) {
    if (!botonPresionado2 || nota != notaAnterior) {
      // Tocar la nota en el buzzer con la escala Eolica
      botonPresionado2 = true;
      tone(pinBuzzer, frecuenciasEolica[nota]); // Tocar la nota correspondiente en la escala Eolica
      notaAnterior = nota;
      Serial.print("Nota: ");
      switch (nota) {
        case 0:
          Serial.print("DO");
          break;
        case 1:
          Serial.print("RE");
          break;
        case 2:
          Serial.print("MIb");
          break;
        case 3:
          Serial.print("FA");
          break;
        case 4:
          Serial.print("SOL");
          break;
        case 5:
          Serial.print("LAb");
          break;
        case 6:
          Serial.print("SIb");
          break;
        case 7:
          Serial.print("DO");
          break;
      }
      Serial.print(" (Eolica) (");
      Serial.print(valorPotenciometro);
      Serial.println(")");
    }
  } else {
    noTone(pinBuzzer); // Detener la reproducción del buzzer
    botonPresionado2 = false;
    notaAnterior = -1;
  }
 
  // Verificar el estado del boton 3
  if (digitalRead(pinBoton3) == LOW) {
    if (!botonPresionado3 || nota != notaAnterior) {
      // Tocar la nota en el buzzer con la escala Locria
      botonPresionado3 = true;
      tone(pinBuzzer, frecuenciasLocria[nota]); // Tocar la nota correspondiente en la escala Locria
      notaAnterior = nota;
      Serial.print("Nota: ");
      switch (nota) {
        case 0:
          Serial.print("DO");
          break;
        case 1:
          Serial.print("REb");
          break;
        case 2:
          Serial.print("MIb");
          break;
        case 3:
          Serial.print("FA");
          break;
        case 4:
          Serial.print("SOLb");
          break;
        case 5:
          Serial.print("LAb");
          break;
        case 6:
          Serial.print("SIb");
          break;
        case 7:
          Serial.print("DO");
          break;
      }
      Serial.print(" (Locria) (");
      Serial.print(valorPotenciometro);
      Serial.println(")");
    }
  } else {
    noTone(pinBuzzer); // Detener la reproduccion del buzzer
    botonPresionado3 = false;
    notaAnterior = -1;
  }
}