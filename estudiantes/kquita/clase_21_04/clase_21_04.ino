int estadoPulsador; 
int estadoPerilla; 
int luz; 
void setup() {
  // put your setup code here, to run once:
pinMode(7, INPUT);
Serial.begin(2400);
pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
estadoPulsador = digitalRead(7); 
Serial.println(estadoPulsador);

estadoPerilla = 1023 - analogRead(A0); 
Serial.println(estadoPerilla);
// se divide para bajar la resolucion, al ser dos enteros el resultado va a ser un entero, lo demás es sobrante y lo ignora 
luz = estadoPerilla / 4; 
analogWrite (9, luz); 

}
