//Codigo para manipular mas de una lucecita con perilla
//int estadoPulsador;
int estadoPerilla;
int lucecita;
int lucecita2;

void setup() {
  // put your setup code here, to run once:
pinMode (7, INPUT);
Serial.begin(9600);
pinMode(9, OUTPUT);
pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//estadoPulsador = digitalRead(7);
//Serial.println(estadoPulsador);

estadoPerilla = 1023 -  analogRead(A0);
Serial.println(estadoPerilla);

lucecita = estadoPerilla / 4;
analogWrite(9, lucecita);
lucecita2 = estadoPerilla / 4;
analogWrite(6, lucecita2);

}
