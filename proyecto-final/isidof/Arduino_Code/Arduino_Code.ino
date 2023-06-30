const int softpotPin = A0; // Pin analógico utilizado para el softpot
int softpotValue; // Valor leído del softpot

void setup() {
  Serial.begin(9600); // Iniciar comunicación serie a 9600 baudios
}

void loop() {
  softpotValue = analogRead(softpotPin); // Leer el valor del softpot
  Serial.println(softpotValue); // Enviar el valor por la comunicación serie

  delay(1000); // Esperar un breve período antes de leer nuevamente
}
