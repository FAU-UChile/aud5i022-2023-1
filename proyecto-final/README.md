Hola, bienvenido. 
Esta es la documentacion del proyecto final !
Estoy trabajando con [kquita](https://github.com/kquita) y [valefuentes](https://github.com/valefuentes)

_____
  ### Contenidos de este repositorio 

+ imagen 20230616_182948.jpg
+ imagen 20230616_183549.jpg
+ imagen 20230616_184042.jpg
+ imagen 20230616_184229.jpg
+ imagen PIR Motion Sensor (Digital Input).png
+ imagen WhatsApp Image 2023-06-30 at 2.24.44 PM.jpeg
+ video WhatsApp Video 2023-06-30 at 2.22.30 PM.mp4
+ archivo README.md
_____
# Acerca de 
Proyecto ETCH A SKETCH: JUGUETE ANÁLOGO EN LA ERA DIGITAL- visualización y principios de interfaz interactiva 

[Junio, 2023]

Estudiantes: [Pilar Vergara](https://github.com/JustPili1), [Valentina Fuentes](https://github.com/valefuentes) y [Silvana Olivares](https://github.com/kquita)

Profesores: [Aaron Montoya](https://github.com/montoyamoraga)

Ayudante : [Ignacio Passalacqua](https://github.com/ipassala)

Ramo: Diseño de interfaz electrónica mediante Arduino (AUD5I022-1)
_____
## Etch a Sketch o Telesketch
Es un juquete para dibujar en vase a dos ejes (X e Y) inventado en 1959 por el francés André Cassagnes (23 de septiembre de 1926 – 16 de enero de 2013) quien en un principio le dio el nopmbre de "Pantalla Mágica" y que fue comercializado por primera vez en Estados Unidos con el nombre de Etch-A-Sketch por Ohio Art Company en 1960 y en España por Borrás. "la Pantalla Mágica". Tras la pelicula de Toy Story se volvió a popularizar.

https://github.com/kquita/aud5i022-2023-1/assets/90356056/0b6c6d0f-cde7-481a-a487-28c4eb970f1f

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

## Armado del circuito 
#### Paso 1: 

Conectar dos cables desde Arduino.Uno a la primera protoboard (1PB):
 + 5V a canal positivo +
 + GND a canal negativo - 
Conectar dos cables más para transpitir la corriente a la segunda protoboard (2PB). Esto puede no ser necesario dependiendo del tamaño de la protoboard a utilizar 
![WhatsApp Image 2023-06-30 at 2 24 44 PM](https://github.com/kquita/aud5i022-2023-1/assets/90356056/fa5c997f-b751-4406-8873-1b45d702db66)

#### Paso 2: 

Acoplar tres potenciometros, dos los extremos de cada protobard (controles de el eje X y el eje Y) y uno extra más cerca del centro (para controlar el grosor de linea).   
Cada potenciometro va conectado con 3 cables. 
  + Canal positivo conectado a pin1 potenciometro (fila 1 y 20 en 1PB y fila 26 en 2PB)
  + Canal negativo conectado a pin3 potenciometro (fila 5 y 24 en 1PB y fila 30 en 2PB)

  Desde Arduino.Uno
  + A0 conectado al pin2 potenciometro del eje X (fila 3 en 1PB)
  + A1 conectado al pin2 potenciometro del eje Y(fila 28 en 2PB)
    ![alt](20230616_183549.jpg "foto de los pines del arduino.uno conectados a los potenciometos X e Y")
    (foto de los Potenciometros de eje X e Y aislados)
  + A2 conectado al pin2 potenciometro del grosor (fila 22 en 1PB)
   ![alt](20230616_184229.jpg "foto de los pines del arduino.uno conectados a el potenciometro del grosor")
    (foto Potenciometro del grosor de linea aislado)

#### Paso 3:
 
Acoplar pulsador a protoboard, resistencia y conectar cables a respectivos pines:

+ Canal positivo de protoboard a pin superior
+ Digital 8 de Arduino.Uno a pin inferior
+ Resistencia entre pin inferior y canal negativo de protoboard
  ![alt](20230616_184042.jpg "foto del pulsador aislado")
  (foto del pulsador aislado)
  Finalmente todo el circuito armado debería lucir se la siguiente manera: 
![20230616_182948](https://github.com/kquita/aud5i022-2023-1/assets/90356056/2a6b8057-89ef-42fd-b2f6-4676a8f3ce43)

#### Paso 4:
Conectar el Arduino.Uno a la corriente de un computador. 

### Diagrama de circuito digital 
![PIR Motion Sensor (Digital Input)](https://github.com/kquita/aud5i022-2023-1/assets/90356056/d33cbaa1-5048-436d-9a92-78325eda6993)
(diagrama de creacion propia)

## Codigo para Arduino Uno
```java
// Etch a Sketch
// Utilizado para Evaluación Final del Electivo Mención I y S: Diseño de interfaz electrónica mediante Arduino
// Estudiantes Valentina Fuentes, Silvana Olivares y Pilar Vergara
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
```

+ ###  En Arduino:
   Se establecen las variables:
 + potX / para almacenar el valor del eje X
 + potY / para almacenar el valor del eje X
 + borrar / para reiniciar el dibujo
 + grosorLinea / variable del grosor de línea

####  Void setup
Se inicia la comunicación serial en 9600 Baudios.

####  Void Loop
A las variables se le asignan los valores de pines análogos específicos ya mencionados y grosorLinea se mapea para poder redefinir el rango de 0-1024 para dejarlo en 1-10 (para tener 10 valores de linea distintos).

  
## Codigo para Processing: 
 ```java
// Etch a Sketch
// Utilizado para Evaluación Final del Electivo Mención I y S: Diseño de interfaz electrónica mediante Arduino
// Estudiantes Valentina Fuentes, Silvana Olivares y Pilar Vergara
// Profesor Aaron Montoya y Ayudante Ignacio Passalacqua
// Código de arduino trabajado en clases 02/06/23
// Basado en el código proporcionado por workshopweekend
// Para que el Etch a Sketch funcione se necesita de:
// Hardware: // + Arduino uno // + 2 Protoboard
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
//pulsador para reiniciar el dibujo
//la pantalla vuelve a blanco 
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
+ ###  En Processing
Nuevamente establecemos las misma variables que en Arduino.
####  Void setup
 Se establecem las dimensionesel canva y el color del fondo.
####  Void Draw
 Se dan las indicasiones para que el pulsador permita borrar lo anteriormente hecho.
 Se separa la información que llega en tres datos.
 Se establecen los límites de la línea (X, Y) con respecto al canva dado que los datos del potenciómetro duplica el tamaño del canva.
 Se crea la línea con los dos datos que indican el grosor y la posición.
####  Void mouseClicked
 Permite que al apretar el botón el fondo del canva vuelva a ser blanco.
####  Void serialEvent
 Se recibe la información con la que vamos a hacer la línea de dibujo.


## Referentes y recursos adicionales

Para este proyecto ocupampos varios  referentes y recursos adicionales para generar ambos códigos.
### Codigos  basado en:
[Etch-a-Sketch por Workshop Weekend](http://workshopweekend.net/arduino/projects/etch_a_sketch)

Y una mencion especial a Paz Castro [Pabecy](https://github.com/Pabecy/clase-09-proyecto-mitad-semestre)
#### Recursos adicionales: 
[PROCESSING: 3.12 Definir el grosor de linea: strokeWeight()](https://www.youtube.com/watch?v=LCjvERxDCxY) x Air Room [Enero 2016]

[Clase 04 - Comunicación serial y BotónPulsador](https://github.com/disenoUChile/aud5i022-2023-1/tree/main/clases/clase-04) x montoyamoraga [Abril 2023]

[Clase 05 - Potenciometro](https://github.com/disenoUChile/aud5i022-2023-1/tree/main/clases/clase-05) x montoyamoraga [Abril 2023]


## Concluciones y aprendizajes 
- Logramos trabajar e integrar dos programas,  arduino y processing para crear el juguete de nuestros sueños de infancia, desde que vimos toy story quisimos jugar con un etch a sketch.
- Integramos lo aprendido en clases para modificar los códigos encontrados en Internet y agregar un pulsador para borrar la pantalla y un potenciador para modificar el grosor de línea
- La mayor dificultad para nosotras fue el trabajar con processing, materializar nuestras ideas en códigos funcionales, como el código para modificar el espesor de línea.

Los mayores logros son: 
- Crear un circuito funcional con potenciometros y pulsadores
- Obtener respuestas y cambios digitales a través de inputs análogos.
- Lograr una interfaz responsiva a las variables de grosor de linea y reinicio

Otras cosas en tener en cuenta son las modificaciones que hicimos como equipo (grosores de línea distintos y el reset)
Las cuales en un principio iban a ser diferentes ya que teniamos en mente cambiar el color de línea y el de fondo , pero para no sobrecargar la interfaz física de la protoboard con muchos pulsadores, decidimos 
solo un potenciómetro más (para el grosor) y pulsador (reset). 

