
float perilla;
int boton;
int luz;

void setup() {
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  perilla = analogRead(A0);
  //Serial.println(perilla);
  delay(100);
  luz = (perilla + 0.5)/4;
  Serial.println(luz);
  analogWrite(9,luz);
}
