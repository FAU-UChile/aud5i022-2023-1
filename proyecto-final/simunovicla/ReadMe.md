# Proyecto Final

# *Interfaz interactiva de sensor, buzzer y led rgb mediante ARDUINO.*

Somos ![Laura Simunovic](https://github.com/simunovicla) y ![Randall Dávalos](https://github.com/RandallDavalos), estudiantes de la asignatura Diseño de interfaz electrónica mediante Arduino: AUD5I022-1.

El proyecto planteado es la emisión y cambio gradual de luz emitido por un led rgb mediante la distancia de un cuerpo en la foto resistencia, y que este cambio de color vaya acompañado de los sonidos emitidos por el buzzer que irán en aumento de pendiendo del color mostrado: rojo, verde, azul o blanco.

---

## Materiales:

- 1 Arduino Uno
- 1 Photoboard
- 3 Resistencias de 220
- 1 Resistencia de 1k 
- 1 Led rgb
- 1 zumbador piezoeléctrico
- 1 pulsador
- 1 foto resistencia - LDR
- 10 cables

## Software

- Arduino IDE 0.3

---

## Armado de circuito

Parte uno: Luz y sensor.

La primera parte utiliza un LED rgb y una foto resistencia –LRD.

El objetivo planteado para la primera parte es el cambio gradual en la emisión de luz mediante un sensor. Se busca que el LED RGB atraviese distintas tonalidades que irán en aumento dependiendo de la distancia de la mano o dedo de la foto resistencia – LRD.

Es decir, el led parte con un color inicial: rojo, sin ningún cuerpo sobre la foto resistencia. Con forme acercamos un cuerpo al foto Resistol el color ira variando: azul, cuerpo a distancia considerable al foto Resistol; verde, cuerpo cercano al foto Resistol, y finalmente blanco, cuerpo a pulgadas del foto Resistol.

**1.**

Primero, el enlace en NEGATIVO y POSITIVO desde Arduino Uno a la photoboard.

- Enlace desde 5V a POSITIVO en photoboard
- Enlace desde CND a NEGATIVO en photoboard

**1.2**

Para el correcto funcionar del Led RGB se necesita enlazar cuatro cables desde el Arduino a la Photoboard.

En DIGITAL (PWM)…

- Hacer conexión con cable entre 9 a la fila D n°30
- Hacer conexión con cable entre 10 a la fila D n°28
- Hacer conexión con cable entre 11 a la fila D n°27
- Conexión desde el negativo a la fila g n°29
    
    ![1.2.jpg](https://github.com/simunovicla/aud5i022-2023-1/blob/main/proyecto-final/simunovicla/RegistroFotografico/1.2.jpg)
    

**1.3**

Utilizar tres resistencias de 220 para el LED RGB en la Photoboard

- 1 Resistol entre la fila e n° 30 y i n° 30
- 1 Resistol entre la fila e n° 28 e i n° 28
- 1 Resistol entre la fila e n° 27 e i n° 27

**1.4**

- Led rgb en la fila L desde el n° 30 al n° 27
    
    ![1.4.jpg](https://github.com/simunovicla/aud5i022-2023-1/blob/main/proyecto-final/simunovicla/RegistroFotografico/1.4.jpg)
    

**1.5**

Para el correcto funcionar del sensor se necesita la conexión desde arduino Uno mediante cables

- Conexión desde Arduino Uno A0 a la fila a n°14
- De negativo a fila a n°16
- De positivo a la fila a n°12

**1.6**

Uso de un Resistol de 1k y el sensor

- Resistol en la fila c n°14 al n° 12
- Sensor en la fila d n°16 al n°14

Parte dos: Buzzer, emisión de sonido.

La segunda parte consta de utilizar un zumbador piesaelectrónico (buzzer) para la reproducción de un sonido particular que vaya en aumento de manera simultánea que el grado el color emitido por el led rgb (parte uno)

![1.6.jpg](https://github.com/simunovicla/aud5i022-2023-1/blob/main/proyecto-final/simunovicla/RegistroFotografico/1.6.jpg)

![1.66.jpg](https://github.com/simunovicla/aud5i022-2023-1/blob/main/proyecto-final/simunovicla/RegistroFotografico/1.66.jpg)

**3.**

Para la conexión del buzzer se deben utilizar dos cables entre Arduino Uno y la photoboard

En DIGITAL (PWM)…

- Hacer conexión con cable del n° 6 Arduino Uno a la fila g n°8
- Conexión desde NEGATIVO a la fila g n°5

**3.2**

- Colocar Buzzer en la fila j POSITIVO n°8 a n°5 NEGATIVO
    
    ![3.22.jpg](https://github.com/simunovicla/aud5i022-2023-1/blob/main/proyecto-final/simunovicla/RegistroFotografico/3.22.jpg)
    
    ![3222.jpg](https://github.com/simunovicla/aud5i022-2023-1/blob/main/proyecto-final/simunovicla/RegistroFotografico/3222.jpg)
    

### Circuito Completo

![circuitototal.jpg](https://github.com/simunovicla/aud5i022-2023-1/blob/main/proyecto-final/simunovicla/RegistroFotografico/circuitototal.jpg)

---

# **CÓDIGO**

### Luz y sensor

```c
//Para el trabajo final de la asignatura de Diseño de interfaz electrónica mediante Arduino: AUD5I022-1
//Por Randall Dávalos y Laura Simunovic Toledo.
//Nuestro objetivo es lograr que una luz RGB led cambie de color conforme a la info percibida por un sensor de luz.
//Simil a sensor de cercanía. 

const int PinLedVerde = 10; //asignamos el pin al color verde. 
const int PinLedRojo = 9;
const int PinLedAzul = 11;

int ValorRojo = 400;  //asignamos un valor númerico al treshold para Rojo. 
int ValorVerde = 500;
int ValorAzul = 600;
int ValorBlanco = 700;


int valorLDR = 0;  //Creamos la variable de tipo número entero para almacenar los datos recogidos del sensor analógico LDR (Light Dependant Resitor).
int pinLDR = A0;   //Seleccionamos el pin analógico A0 como input del sensor LDR.

void setup() {

  pinMode(PinLedVerde, OUTPUT);
  pinMode(PinLedRojo, OUTPUT);
  pinMode(PinLedAzul, OUTPUT);

  Serial.begin(9600);
}
void loop() {
  valorLDR = analogRead(pinLDR);  //Leemos el valor del pinLDR y lo guardamos en la variable creada.
  Serial.println(valorLDR);       //Imprimimos dicho valor, comprendido entre 0 y 1023.

  //queremos que conforme a la distancia que perciba el sensor, en base a la diferencia de luz, sea distinto el color que emite el Led.
  //vamos a intentar que, comparando el ValorLDR a los valores que establecimos antes, esto funcione. 
 if (valorLDR <= ValorRojo){
  analogWrite(PinLedRojo,20);
  analogWrite(PinLedVerde,0);
  analogWrite(PinLedAzul,0);

 } else if (valorLDR <= ValorVerde){
   analogWrite(PinLedRojo,0);
   analogWrite(PinLedVerde,50);
   analogWrite(PinLedAzul,0);
 } else if (valorLDR <= ValorAzul){
   analogWrite(PinLedRojo,0);
   analogWrite(PinLedVerde,0);
   analogWrite(PinLedAzul,70);
 }
 else {
   analogWrite(PinLedRojo,100);
   analogWrite(PinLedVerde,100);
   analogWrite(PinLedAzul,100);
 }
}
```

### Buzzer; emision de sonido

Trabajamos en un archivo nuevo, en base al trabajo de la luz, agregando las secciones requeridas para agregar la funcionalidad del buzzer. 

```c
//En base al trabajo realizado en el archivo LuzySensor.ino.
//Vamos a agregar la funcionalidad de avisador de sonido, utilizando un buzzer.

const int PinLedVerde = 10;  //asignamos el pin al color verde.
const int PinLedRojo = 9;
const int PinLedAzul = 11;
const int pinBuzzer = 6;

int ValorRojo = 400;  //asignamos un valor númerico al treshold para Rojo.
int ValorVerde = 500;
int ValorAzul = 600;
int ValorBlanco = 700;

int valorLDR = 0;  //Creamos la variable de tipo número entero para almacenar los datos recogidos del sensor analógico LDR (Light Dependant Resitor).
int pinLDR = A0;     //Seleccionamos el pin analógico A0 como input del sensor LDR.

void setup() {

  pinMode(PinLedVerde, OUTPUT);
  pinMode(PinLedRojo, OUTPUT);
  pinMode(PinLedAzul, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);

  Serial.begin(9600);
}
void loop() {
  valorLDR = analogRead(pinLDR);  //Leemos el valor del pinLDR y lo guardamos en la variable creada.
  Serial.println(valorLDR);       //Imprimimos dicho valor, comprendido entre 0 y 1023.

  //queremos que conforme a la distancia que perciba el sensor, en base a la diferencia de luz, sea distinto el color que emite el Led.
  //vamos a intentar que, comparando el ValorLDR a los valores que establecimos antes, esto funcione.
  if (valorLDR <= ValorRojo) {
    analogWrite(PinLedRojo, 20);
    analogWrite(PinLedVerde, 0);
    analogWrite(PinLedAzul, 0);
    analogWrite(pinBuzzer, 0);

  } else if (valorLDR <= ValorVerde) {
    analogWrite(PinLedRojo, 0);
    analogWrite(PinLedVerde, 20);
    analogWrite(PinLedAzul, 0);
    analogWrite(pinBuzzer, 80);
  } else if (valorLDR <= ValorAzul) {
    analogWrite(PinLedRojo, 0);
    analogWrite(PinLedVerde, 0);
    analogWrite(PinLedAzul, 70);
    analogWrite(pinBuzzer, 300);
  } else {
    analogWrite(PinLedRojo, 100);
    analogWrite(PinLedVerde, 100);
    analogWrite(PinLedAzul, 100);
    analogWrite(pinBuzzer, 700);
  }
}
```

---

## Conclusiones y aprendizaje:

Es un proyecto interesante realizar que mostro cierta dificultad al realizarse. El trabajo consta de tres partes: el led, el sensor y el buzzer. El primer reto fue hacer funcionar el led de manera individual, siendo este lo primero en probar y donde no se utilizó un led rgb sino uno simple. apoyándonos de los códigos de clase la dificultad fue hacerlo funcionar con los elementos que precisábamos para el cumplir el objetivo propuesto. Pasar del led simple a uno rgb y que este funcionar con otro elemnto: el sensor y finalmente con el buzzer.

El proyecto permite aprender la unión de distintos elementos, en este caso, tres elementos con distinto comportamiento y que funcionen en conjunto.

---

## Referencias y recursos utilizados para la realización del código:

- LAMPARA DE MEZCLA DE COLORES, del libro ‘’Arduino, libro de proyectos startert kit’’ ( Scott Fitzgerald y Michael Shiloh), pág. 53.
- Fernández, T. (2013). *ARDUINO PROJECTS BOOK* [PDF]. USA,
- [ej_03_pulsador_luz_intermitenteConclusiones de montoyamoraga:](https://github.com/disenoUChile/aud5i022-2023-1/blob/main/clases/clase-04/ej_03_pulsador_luz_intermitente/ej_03_pulsador_luz_intermitente.ino)


![Apuntes de la clase 12, en la que se realizó el proyecto](https://github.com/simunovicla/aud5i022-2023-1/tree/16a5a5d04e5dd342b512eadeef25cc64a4f0ce3d/proyecto-final/simunovicla)
