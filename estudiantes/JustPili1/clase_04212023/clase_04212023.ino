// pwm pulse (de 0 a 5 volts) wide (ancho) modular(hacer cambios) prender y apagar en proporciones distintas, es para modular imitar un voltaje entre 0 y 5V)

int estadoPulsador;
int estadoPerilla;
int luz;


void setup() {
  // put your setup code here, to run once: 9600 es una estándar velocidad de ... taza baud

  pinMode(7, INPUT);
  Serial.begin(9600);
  pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 
 estadoPulsador = digitalRead(7);
 //Serial.println(estadoPulsador);
 
 //potensiómetro. Delay ayuda a que se vea mejor el gráfico, el que está en la esquina superior derecha, llamado serial Plotter. La resolución es 1/4 de 1023 máximo(??)
 estadoPerilla = analogRead(A0);
 Serial.println(estadoPerilla);
 delay(100);
 //analog no es necesariamente del lado analog, porque al ser write quiere decir que es digital, por lo que es por esto que se conecta al lado digital en las "patitas" que son pwm
 luz = estadoPerilla / 4;
 analogWrite(9, luz);


}
