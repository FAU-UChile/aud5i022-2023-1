int estadoPulsador;

int estadoPerilla;

int luz;

void setup() {
  pinMode(7, INPUT);
  Serial.begin(9600);
  pinMode(9, OUTPUT);


}

void loop(){
  estadoPulsador = digitalRead(7);
  Serial.println(estadoPulsador);

  estadoPerilla = analogRead(A0);
  Serial.println(estadoPerilla);

  luz = estadoPerilla / 4;

  analogWrite(9, luz);

}