Hola, bienvenido. 
Esta es la documentacion del proyecto final !
Estoy trabajando con [kquita](https://github.com/kquita) y [valefuentes](https://github.com/valefuentes)

_____
# Acerca de 
Proyecto ETCH A SKETCH: JUGUETE ANÁLOGO EN LA ERA DIGITAL- visualización y principios de interfaz interactiva

[Junio, 2023]

Estudiantes: [Pilar Vergara](https://github.com/JustPili1), [Valentina Fuentes](https://github.com/valefuentes) y [Silvana Olivares](https://github.com/kquita)

Profesores: [Aaron Montoya](https://github.com/montoyamoraga)

Ayudante : [Ignacio Passalacqua](https://github.com/ipassala)

Ramo: Diseño de interfaz electrónica mediante Arduino (AUD5I022-1)
_____
*Video*

## Materiales 
#### Hardware
+ Arduino uno
+ 2 Protoboard
+ 3 potenciometros
+ Pulsador 
+ Resistencia de 220R
+ 5 cables rojos
+ 5 cables verdes
+ 1 cable blanco
+ 1 Cable azul
+ 2 amarillos

  #### Software: 
+ Arduino IDE
+ Processing

#### Código para Arduino Uno
```java
// Etch a Sketch
// Utilizado para Evaluación Final del Electivo Mención I y S: Diseño de interfaz electrónica mediante Arduino
// Profesor Aaron Montoya y Ayudante Ignacio Passalacqua
// Código de arduino trabajado en clases 02/06/23
// Basado en el código proporcionado por workshopweekend

// Para que el Etch a Sketch funcione se necesita de:
// Hardware:
// + Arduino uno
// + 2 Protoboard
// + 3 potenciometros
// + Pulsador 
// + Resistencia de 220R
// + 5 cables rojos
// + 5 cables verdes
// + 1 cable blanco
// + 1 Cable azul
// + 2 amarillos

// Software: 
// + Arduino IDE
// + Processing

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
```

#### Codigo para Processing: 
 ```java
 // Etch a Sketch
 // Utilizado para Evaluación Final del Electivo Mención I y S: Diseño de interfaz electrónica mediante Arduino
 // Profesor Aaron Montoya y Ayudante Ignacio Passalacqua
 // Código de arduino trabajado en clases 02/06/23
 // Basado en rl códig proporcionado por Trevor Shannon

// Para que el Etch a Sketch funcione se necesita de:
// Hardware:
// + Arduino uno
// + 2 Protoboard
// + 3 potenciometros
// + Pulsador 
// + Resistencia de 220R
// + 5 cables rojos
// + 5 cables verdes
// + 1 cable blanco
// + 1 Cable azul
// + 2 amarillos

// Software: 
// + Arduino IDE
// + Processing

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

```
### Referentes y recursos adicionales 
http://workshopweekend.net/arduino/projects/etch_a_sketch

Paz Castro [pabecy](https://github.com/Pabecy/clase-09-proyecto-mitad-semestre)

https://processing-spain.blogspot.com/2015/09/312-definir-el-grosor-del-borde.html

### Analisis del Código 
#### + En Arduino 
#### + Void setup 
#### + Void Loop
#### + En Processing
#### + Void setup 
#### + Void Loop

## Concluciones
