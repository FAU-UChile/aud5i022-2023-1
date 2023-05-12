int Pulsador = 7;
int EstadoPul;

int Potenciometro = A0;
int EstadoPot;
int Luzpin = 9;
int Luz;

void setup() {
  // put your setup code here, to run once:

//pinMode(Pulsador, INPUT);

pinMode(Luzpin, OUTPUT);

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

//EstadoPul = digitalRead(Pulsador);
//Serial.println(EstadoPul);

EstadoPot = analogRead(Potenciometro);
Serial.println(EstadoPot); 

Luz = EstadoPot / 4;
analogWrite(Luzpin, Luz);

}
