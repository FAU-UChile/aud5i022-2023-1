int estadoPulsador;
int estadoPerilla;
int Luz;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  estadoPulsador = digitalRead(7);
  //Serial.println(estadoPulsador);

  estadoPerilla = analogRead(A0);
  Serial.println (estadoPerilla);

  Luz = estadoPerilla / 4;
  analogWrite(9,Luz);
  
}
