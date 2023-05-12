int estadoPulsador;
int estadoPerilla;
int luz;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  Serial.begin(9600);
  pinMode (9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
estadoPulsador = digitalRead(7);
Serial.println(estadoPulsador);

// digital read viene acompañado de numero (1 al 13)
//analog read viene acompañado de A + 1 al 5
//estadoPerilla = 1023 - analogRead(A0); para dar vuelta sentido de la perilla

estadoPerilla = analogRead(A0);
Serial.println(estadoPerilla);

luz = estadoPerilla / 4;
// el dividido en 4 es para bajar la resolución a un cuarto, ya no habría 1023 valores, sino que menos. Para que sean leíbles por el LED.

analogWrite (9, luz);

}
