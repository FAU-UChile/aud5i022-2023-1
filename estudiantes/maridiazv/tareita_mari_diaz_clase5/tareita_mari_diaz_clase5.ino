int estadoPulsador;
int estadoPerilla;
int luz;
int luz2;

void setup() {
  // put your setup code here, to run once:

 pinMode(7, INPUT);
 Serial.begin(9600);
 pinMode(9, OUTPUT);
 pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 estadoPulsador = digitalRead(7);
 //Serial.println(estadoPulsador);

 estadoPerilla = 1023 - analogRead(A0);
 Serial.println(estadoPerilla);

 luz = estadoPerilla / 4;


 analogWrite(9, luz); 
 luz2 = estadoPerilla / 4;


 analogWrite(3, luz2); 

}
