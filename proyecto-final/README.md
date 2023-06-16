# proyecto-final

todo
Arduino
//Codigo de arduino trabajado en clases 02/06/23
int potX;
int potY;
//agregamos un boton para reiniciar el dibujo
int borrar;
//agregamos una nueva variable que genera un rango en el grosor de la línea
int grosorLinea;

void setup() {
  Serial.begin(9600);
}

void loop() {
  potX = analogRead(A0);
  potY = analogRead(A1);
  grosorLinea = analogRead(A2);
  // estamos seteando el grosor de la línea, para esto ocupamos la función de MAP
  grosorLinea = map(grosorLinea, 0, 1023, 1, 10); 
  borrar = digitalRead(8);
  Serial.print(potX);
  Serial.print(" ");
  Serial.print(potY);
  Serial.print(" ");
  Serial.print(grosorLinea);
  Serial.print(" ");
  Serial.println(borrar);
  delay(50);
}


Processing 

//y este es el codigo de processing: // Etch-a-Sketch
// based on a sketch by Trevor Shannon

//falta la intro y el hardware

import processing.serial.*;

Serial port;
String serialInterface = "COM4";
int lastX = -1;
int lastY = -1;
int x;
int y;
int borrar = 0;
int grosorLinea = 1;
String nextXY="";

void setup() {
  size(512, 512);
  background(255);
  port = new Serial(this, serialInterface, 9600);
  port.bufferUntil('\n');
}


void draw() {
  //ahora el boton para reiniciar la pantalla del sketch
  if (borrar == 1) {
    background(255);
  }
  String[] parts = splitTokens(nextXY);
  //separamos la informacion que está llegando en tres datos
  if (parts.length >= 3) {
    // está epartido en dos porque el canvas es de 512px, y los valores del potenciometro son el doble (0 a 1024)
    //esto se puede solucionar con un mapeo, que sirve para setear nuevos rangos del potenciometro
    x = int(parts[0])/2;
    y = int(parts[1])/2;
    grosorLinea = int(parts[2]);
    borrar = int(parts[3]);
    // print(borrar);
    //aca estamos creando la linea a partir de los dos datos
    if (lastX >= 0 && lastY >= 0) {
      strokeWeight(grosorLinea);
      line(x, y, lastX, lastY);
    }
    lastX = x;
    lastY = y;
  }
}

void mouseClicked() {
  background(255);
}
//acá recibimos la información con la que vamos a hacer la linea de dibujo.
void serialEvent(Serial p) {
  nextXY = p.readString();
  print(x,y, grosorLinea);
  print("\n");
  
  
}
