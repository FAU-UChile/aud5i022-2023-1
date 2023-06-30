// Pines de conexión
const int botonSi = 8;
const int botonNo = 7;
const int ledVerde = 13; //este se prenderá con las respuestas correctas
const int ledRojo = 12; //este se prenderá con las respuestas incorrectas
int perilla = A0; // Al ganar el juego, se podrán visualizar distintas imagenes al girar la perilla
int valorPerilla = -1;

// Valores de tiempo para todos los delay.
// Si se modifica el tiempo desde aquí, se modifica igual para todas las luces LED.
int play = 300;


//variables para el numero de respuestas correctas o incorrectas
int Correctas = 0;
int Incorrectas = 0;

// Variables de control
int preguntaActual = 0; // Índice de la pregunta actual
const int totalPreguntas = 10; // Total de preguntas (son 10)
bool respuestaCorrecta; //indica si la respuesta es correcta o no
bool respuestaBotonSi; // se almacena el dato de que se presionó el botón de "si"
bool respuestaBotonNo; // se almacena el dato de que se presionó el botón de "no"

// Matriz de preguntas y respuestas
const char preguntas[][50] = {
  "1. El Artico es el lugar mas frio de la Tierra?",
  "2. Es el Amazonas el rio mas largo del mundo?",
  "3. Aves y pajaros son lo mismo?",
  "4. Es el Golden Retriever el perro mas inteligente?",
  "5. La palta es una fruta?",
  "6. El segundo planeta del sistema solar es marte?",
  "7. La capital de Turquia es Estambul?",
  "8. Los telescopios pueden ver bacterias?",
  "9. El autor de Don Quijote es Miguel de Cervantes?",
  "10. Es el tiburón un pez?"
};

const bool respuestasCorrectas[] = { false, true, false, false, true, true, false, false, true, true}; // resolucion de las preguntas anteriores
//false = no, true = si
void generarPregunta(); //genera la pregunta en el serial monitor
void mostrarRespuestaCorrecta();
void respuestaIncorrecta();
void mostrarContadorPuntos();


void setup() {
  // Configurar pines
  pinMode(botonSi, INPUT);
  pinMode(botonNo, INPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledRojo, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  generarPregunta();

  // Esperar a que se presione un botón
  while (!respuestaBotonSi && !respuestaBotonNo) {
    respuestaBotonSi = digitalRead(botonSi);
    respuestaBotonNo = digitalRead(botonNo);
    delay(100);  
  }

  // Verificar respuesta
  if ((respuestaBotonSi && respuestaCorrecta) || (respuestaBotonNo && !respuestaCorrecta)) {
    mostrarRespuestaCorrecta();
  } else {
    respuestaIncorrecta();
  }

  // Avanzar a la siguiente pregunta
  preguntaActual++;

  // Reiniciar variables para la siguiente pregunta
  respuestaBotonSi = false;
  respuestaBotonNo = false;

  // Si se alcanzó el final de las preguntas, reiniciar el contador
  if (preguntaActual >= totalPreguntas) {
    preguntaActual = 0;
    // Verificar si se obtuvieron 5 respuestas correctas
    if (Correctas == 5) {
      // Mostrar mensaje de felicitaciones
      Serial.println("Felicitaciones! Tuviste 5 correctas:).");
    }
  }  
  valorPerilla = analogRead(perilla);
  Serial.write(valorPerilla);

  delay(100);     
}
void generarPregunta() {
  // Mostrar la pregunta actual en el monitor serial
  Serial.println(preguntas[preguntaActual]);
  respuestaCorrecta = respuestasCorrectas[preguntaActual];
}

void mostrarContadorPuntos() { //Contador de puntos que dice la c/ de respuestas correctas e incorrectas que se lleva
  Serial.print("Respuestas correctas: "); //aparece este mensaje en monitor serial
  Serial.print(Correctas); //junto con la frase "Respuestas correctas: " se imprime Correctas, que es el numero de respuestas correctas
  Serial.print(" - Respuestas incorrectas: "); //aparece este mensaje en monitor serial
  Serial.println(Incorrectas); //junto con la frase "Respuestas incorrectas: " se imprime Correctas, que es el numero de respuestas incorrectas
}

void mostrarRespuestaCorrecta() { //en caso de obtener respuesta correcta
  Serial.println("Respuesta correcta!"); //aparece este mensaje en monitor serial 
  //para que tintinee la luz led
  delay(play);
  digitalWrite(ledVerde, HIGH);
  delay(play);
  digitalWrite(ledVerde, LOW);
  delay(play);
  digitalWrite(ledVerde, HIGH);
  delay(play);
  digitalWrite(ledVerde, LOW);
  delay(play);
  digitalWrite(ledVerde, HIGH);
  delay(play);
  digitalWrite(ledVerde, LOW);
  Correctas++;
  mostrarContadorPuntos(); //muestra la cantidad de preguntas correctas e incorrectas hasta el momento
}

void respuestaIncorrecta() { //en caso de obtener respuesta incorrecta
  Serial.println("Respuesta incorrecta!");
  delay(play);
  digitalWrite(ledRojo, HIGH);
  delay(play);
  digitalWrite(ledRojo, LOW);
  delay(play);
  digitalWrite(ledRojo, HIGH);
  delay(play);
  digitalWrite(ledRojo, LOW);
  delay(play);
  digitalWrite(ledRojo, HIGH);
  delay(play);
  digitalWrite(ledRojo, LOW);
  Incorrectas++;
  mostrarContadorPuntos();
}
