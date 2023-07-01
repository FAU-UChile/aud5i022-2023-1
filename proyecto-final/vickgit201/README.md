Trabajo: Arduino para inexpertxs + quiz

Introducción
Para nuestro proyecto final realizamos dos cosas:
1.	Un trabajo investigativo sobre Arduino y Processing. El objetivo de este es servir de tutorial para aquellas personas que no saben cómo usar la placa de Arduino ni los softwares relacionados (Arduino y Processing), pero están interesados en aprender. 
2.	Un juego estilo quiz de preguntas sí/no. Este juego consiste en una serie de preguntas de cultura general con respuestas sí o no. Para ello la persona tiene que responder clickeando el botón de sí/no en la protoboard. Si la respuesta es correcta la luz verde se prenderá, mientras que si es incorrecta la luz roja se prenderá. Las preguntas y puntajes podrán visualizarse en una interfaz de processing, la cual al finalizar el juego mostrará una serie de imágenes que pueden irse visualizando al mover la perilla de la protoboard.

Circuito en Arduino
1.- Conectar 2 pulsadores en la protoboard en la columna e y f.

![foto 1](https://github.com/vickgit201/aud5i022-2023-1/blob/main/proyecto-final/vickgit201/Imagen1.png)

2.- Conectar la patita inferior de cada pulsador a tierra con una resistencia de 220R.

![foto 2](https://github.com/vickgit201/ArduinoParaInexpertxsyEjemplo/blob/main/Imagen21.png)

3.- Conectar la patita superior de cada pulsador a 5 volts con un cable auxiliar. 

![foto 3](https://github.com/vickgit201/aud5i022-2023-1/blob/main/proyecto-final/vickgit201/Imagen22.png)

4.- Conectar las patitas inferiores de los pulsadores con la ayuda de un cable. El primero 
(pulsador de abajo) en el pin 7 y el segundo (pulsador de arriba) en el pin 8.

![foto 4](https://github.com/vickgit201/ArduinoParaInexpertxsyEjemplo/blob/main/Imagen23.png)
![foto 5](https://github.com/vickgit201/ArduinoParaInexpertxsyEjemplo/blob/main/Imagen24.png)

5.- Conectar 2 luces en la protoboard una de color rojo y otra de color verde, en la columna b
(La patita de más larga positiva va arriba y la más corta negativa va abajo).

![foto 6](https://github.com/vickgit201/ArduinoParaInexpertxsyEjemplo/blob/main/Imagen26.png) 

6.- Conectar la patita inferior de cada luz a tierra con una resistencia de 220R.

![foto 7](https://github.com/vickgit201/ArduinoParaInexpertxsyEjemplo/blob/main/Imagen27.png)

7.- Conectar la patita superior de cada luz con la ayuda de un cable a los pines 12 y 13.

![foto 8](https://github.com/vickgit201/ArduinoParaInexpertxsyEjemplo/blob/main/Imagen28.png)
![foto 9](https://github.com/vickgit201/ArduinoParaInexpertxsyEjemplo/blob/main/Imagen29.png)

8.- Conectar un cable a 5 volt. 

![foto 10](https://github.com/vickgit201/ArduinoParaInexpertxsyEjemplo/blob/main/Imagen30.png)

9.- Conectar un cable a GND.

![foto 11](https://github.com/vickgit201/ArduinoParaInexpertxsyEjemplo/blob/main/Imagen31.png)

10.- Conectar una perilla en la columna j partiendo en la fila 2.

![foto 12](https://github.com/vickgit201/ArduinoParaInexpertxsyEjemplo/blob/main/Imagen32.png)

11.- Conectar la patita inferior de la perilla a tierra con la ayuda de un cable.

![foto 13](https://github.com/vickgit201/ArduinoParaInexpertxsyEjemplo/blob/main/Imagen33.png)

12.- Conectar la patita del medio de la perilla con la ayuda de un cable a A0.

![foto 14](https://github.com/vickgit201/ArduinoParaInexpertxsyEjemplo/blob/main/Imagen34.png)
![foto 15](https://github.com/vickgit201/ArduinoParaInexpertxsyEjemplo/blob/main/Imagen35.png)

13.- Conectar la patita superior de la perilla a 5 volts con la ayuda de un cable.

![foto 16](https://github.com/vickgit201/ArduinoParaInexpertxsyEjemplo/blob/main/Imagen36.png)
![foto 17](https://github.com/vickgit201/ArduinoParaInexpertxsyEjemplo/blob/main/Imagen37.png)

Materiales:
•	2 pulsadores
•	4 resistencias de 220R
•	1 luz roja
•	1 luz verde
•	1 perilla
•	3 cables naranjos
•	3 cables blancos
•	2 cables verdes
•	2 cables azules
•	1 cable rojo

Código
Código realizado en Arduino IDE y después pasado a Processing. (En los archivos “final3” y “proyectofinal” está explicado con anotaciones // cómo fue realizada cada cosa).

Trabajo realizado por:

Victoria Claveria 
Katherine Machuca 
Javiera Torres




